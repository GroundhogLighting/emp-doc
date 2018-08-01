---
description: Lets write our first Emp script
---

# Basic script structure

## Our first script

The first thing you should do is to open a text editor, and create a new file called `hello.lua` . In that file write the following

```lua
print("This is my first message")
```

The `print()` function comes [within Lua](https://www.lua.org/manual/5.3/manual.html#pdf-print) and it:

> Receives any number of arguments and prints their values to stdout

The stdout is the "direction" where the normal output from a program goes to. By default it goes to the console, but we will see later how to redirect it to a file.

Now, we can run this simple script to see what happens.

```bash
# Notice that the ./ is required 
# for scripts that are not in the EMPFILE
emp - ./hello 
```

And the output is

```bash
This is my first message
Warning: No tasks in TaskManager, so nothing to do... to avoid this message set 'auto_solve = false' in your script
```

### A warning?

Yes, there is a warning... however, we got the result we wanted! That is, the correct message was printed on the console.

What the warning is saying is that the Task Manager has no tasks. There are two obvious ways of solving this.

1. Pushing tasks to the Task Manager \(e.g. ask Emp to calculate something\)
2. Tell Emp that this script does not intend to perform calculations. That can be done by including `auto_solve = false` somewhere in the script.

So, our script would become

```lua
auto_solve = false
print("This is my first message")
```

And now, when running it \(just like before\) we get

```bash
This is my first message
```

## Stdout and Stderr

If you, as most people, do not want to loose your work, you will want to put your results into a file. However, you do not want the errors and warnings to stay in that file. This is easily done by understanding the concept of Standard Output \(`stdout`\) and Standard Error \(`stderr`\).

### Putting the stdout to a file

With this purpose, we use the `'>'` operator. Such operator tells the program to "not write the stdout to the console, but to a file"

```bash
# Notice that the ./ is required 
# for scripts that are not in the EMPFILE
emp - ./hello > results.txt
```

If you see the content of the resulting files, you will see what was previously to the console.

### Putting the stderr to a file

With this purpose, we use the `'2>'` operator. Such operator tells the program to "not write the stderr to the console, but to a file"

```bash
emp - ./hello 2> errors.txt
```

### Some other useful tips

You should know that you can use both operators together

```bash
emp - ./hello 2> errors.txt > output.txt
```

And, find out what the `>>` and `2>>` operators do

```bash
emp - ./hello 2>> errors.txt >> output.txt
```

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

### Dealing with absence of argument

Sometimes people make mistakes and do not provide a certain argument. For example, run the `Hello.lua` script without a first argument

```bash
emp - Hello.lua
```

The result is

```text
Hello	nil
```

That means that that the variable `name` was not initialized, which could cause a big error in other sections of the code or Emp. Lua provides at least two very simple ways of dealing with this, which are explained belo.

#### Throwing an error 

One option is to check if the element is nil, and do something about it \(e.g. raise an error\)

```lua
-- We tell Emp that we will not make calculations
auto_solve = false 

-- capture the first argument
name = argv[1] 

-- If there is no first argument (i.e. name is nil)
-- throw an error.
if name == nil then
    raise("You need to provide an argument")
end

-- This section of the code will never run unless a
-- name is provided
print("Hello",name)
```

Running this script without an argument throws an error

```text
'Internal error' error in line 10: You need to provide an argument
```

In any other case it will greet

#### Providing default values to arguments

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



