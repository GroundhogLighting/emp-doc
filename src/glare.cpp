/*****************************************************************************
	Glare

    Copyright (C) 2017  German Molina (germolinal@gmail.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*****************************************************************************/


#include <string>

#include "config_constants.h"

#include "./glare.h"
#include "./common/utilities/io.h"
#include "./common/utilities/stringutils.h"
#include "./common/utilities/file.h"

#include "readers/skp/SKPreader.h"
#include "api/api.h"

#include "common/taskmanager/tasks/export.h"

// Include LUA headers
extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h> 
}



Glare::Glare() 
{
	DEBUG_MSG("Creating Glare object");	
}

Glare::~Glare() 
{
	DEBUG_MSG("Destroying Glare object");	
}



bool Glare::parseInputs(int argc, char* argv[]) 
{
	if (argc == 1) {
		/* Only input is program name. i.e. no inputs... wrong */
		std::cout << USAGE << std::endl;
		return false;
	}else if (argc == 2) {
		// Input file... calculation will be performed.
		// call in the shape of 'Glare inputFile'
		inputFile = std::string(argv[1]);		
	}
	else {
		// Input file and at least one more.
		inputFile = std::string(argv[1]);
		secondArgument = std::string(argv[2]);		
	}

	// Check if inputFile makes sense.
	char * supportedInputs[] = { ".skp" };
	if (!stringIncludeAny(inputFile, supportedInputs,2)) {
		fatal("Only .SKP input files are supported for now", __LINE__, __FILE__);
		return false;
	}

	// verify that inputFile exists
	if (!fexists(inputFile)) {
		fatal("File '" + std::string(inputFile) + "' not found", __LINE__, __FILE__);
		return false;
	}


	
	return true;
} // END OF PARSE INPUTS


bool Glare::solve(int argc, char* argv[])
{
	
	
	// Load file
	loadFile(inputFile);

	// Analize second argument
	if (secondArgument.empty()) {		
		
		fatal("Solving a model is not yet supported!", __LINE__, __FILE__);
		return false;		

	} else if (stringInclude(secondArgument, ".lua")) {
		// Lua script was input... process

		// check if script exists
		if (!fexists(secondArgument)) {
			fatal("Lua script '" + std::string(secondArgument) + "' not found", __LINE__, __FILE__);
			return false;
		}

		// Process LUA script
		int status, result;

		// Create lua state
		lua_State * L = luaL_newstate();

		// Open libraries
		luaL_openlibs(L);

		// Load API
		loadAPI(L,&model,&taskManager,argc,argv);

		// Load script
		status = luaL_loadfile(L, secondArgument.c_str());
		if (status) {
			fatal(lua_tostring(L, -1), __LINE__, __FILE__);
			return false;
		}

		result = lua_pcall(L, 0, LUA_MULTRET, 0);
		if (result) {
			fatal("Error when executing script file '" + secondArgument + "'", __LINE__, __FILE__);
			fatal(lua_tostring(L, -1), __LINE__, __FILE__);
			return false;
		}

		// Autosolve?
		bool autoSolve = true;

		lua_getglobal(L, LUA_AUTOSOLVE_VARIABLE);
		// Check type
		if (lua_type(L, 1) == LUA_TBOOLEAN) {
			autoSolve = lua_toboolean(L, 1);
		}
		taskManager.print();
		if (autoSolve) {
			taskManager.solve();
		}


	}
	else {
		// translate
		if (!stringInclude(secondArgument, ".")) {
			// Radiance format... no extension
			taskManager.addTask(new ExportRadianceDirWithWorkplanes(secondArgument,&model,verbose));
			taskManager.solve();
		}
		else {
			fatal("Unrecognized file extension in " + secondArgument, __LINE__, __FILE__);
			return false;
		}
	}

	return true;
};



bool Glare::loadFile(std::string input) 
{
	// inputFile is a Sketchup model
	if (stringInclude(input, ".skp")) {
		SKPReader reader(&model,verbose);
		if (!reader.parseSKPModel(input)) {
			fatal("Could not read file '" + std::string(input) + "'", __LINE__, __FILE__);
			return false;
		}
	}
	return true;
}

		

