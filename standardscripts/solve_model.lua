--[[

@version 1.0.0
@author German Molina
@date November 2, 2017
@API 0.0.0

@title Solves the whole model
@brief This script solves all the objectives in the model

It is the same as calling the

@code glare inputmodel

]]

task_manager.load_tasks_from_model()

-- this solves automatically... unless the 'solve_automatically' variable is set to false

