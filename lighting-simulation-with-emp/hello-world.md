# Passing arguments to scripts

## Introduction

## Providing arguments to the script

In many cases, it will be useful to provide your scripts with arguments. For example, for choosing the name of an element, the color of a material or whatever other parameter you may be interested in.

Emp allows providing arguments to your scripts. This is easily done by writing all the arguments after the command

```text
emp - script Argument1 Argument2 ...
```

Lets write a script called `Hello.lua` that takes advantage of this:

```lua
-- We tell Emp that we will not make calculations
auto_solve = false 

-- capture the first argument.
-- The second argument will be stored in argv[2], and so on.
name = argv[1]

-- Greet
print("Hello",name)
```

And run it

```bash
emp - Hello.lua John
```

And the results are

```text
Hello	John
```

## Dealing with absence of argument

Sometimes people make mistakes and do not provide a certain argument. For example, run the `Hello.lua` script without a first argument

```bash
emp - Hello.lua
```

The result is

```text
Hello	nil
```

That means that that the variable `name` was not initialized, which could cause a big error in other sections of the code or Emp. Lua provides at least two very simple ways of dealing with this, which are explained belo.

### Throwing an error 

One option is to check if the element is nil, and do something about it \(e.g. raise an error\)

```lua
-- We tell Emp that we will not make calculations
auto_solve = false 

-- capture the first argument
name = argv[1] 

-- If there is no first argument (i.e. name is nil)
-- throw an error.
if name == nil then
    error("You need to provide an argument")
end

-- This section of the code will never run unless a
-- name is provided
print("Hello",name)
```

Running this script without an argument throws an error

```text
./Hello.lua:10 You need to provide an argument
```

In any other case it will greet

### Default values for arguments

Another option is to set a default value to such argument.

```lua
-- We tell Emp that we will not make calculations
auto_solve = false 

-- capture the first argument... 
-- if it does not exist, set it to "Jim"
name = argv[1] or "Jim"

-- Greet
print("Hello",name)
```

Running this script without an argument prints `Hello Jim`; in any other case, it will greet as expected.



