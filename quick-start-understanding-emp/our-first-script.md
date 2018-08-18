# Our first script

## Introduction

In this tutorial we will be the first introduction to scripts in Emp. Our script will not really do anything but displaying a message in the screen. However, you will learn a bit about how Emp works internally.

## Writing our first script

The first thing you should do is to open a text editor, and create a new file called `emp101.lua`. In that file write the following

```lua
-- emp101.lua
-- ==========

print("This is my first message")
```

The `print()` function comes [within Lua](https://www.lua.org/manual/5.3/manual.html#pdf-print) and it:

> Receives any number of arguments and prints their values to stdout

The stdout is the "direction" where the normal output from a program goes to. By default it goes to the console, but we will see later how to redirect it to a file.

Now, we can run this simple script to see what happens.

```bash
# Notice that the ./ is required 
# for scripts that are not in the EMPFILE
emp - ./emp101 
```

And the output is

```bash
This is my first message
Warning: No tasks in TaskManager, so nothing to do... to avoid this message set 'auto_solve = false' in your script
```

### A warning?

Yes, there is a warning... however, we got the result we wanted! That is, the correct message was printed on the console.

What the warning is saying is that the Task Manager has no tasks. There are two obvious ways of solving this.

1. Pushing tasks to the Task Manager \(i.e. ask Emp to calculate something\)
2. Tell Emp that this script does not intend to perform calculations. That can be done by including `auto_solve = false` somewhere in the script.

So, our script would become

```lua
-- emp101.lua
-- ==========

-- Tell Emp that we will not solve any tasks.
auto_solve = false 

print("This is my first message")
```

And now, when running it \(just like before\) we get

```bash
This is my first message
```

## Conclusions

As mentioned in the [Emp architecture](https://groundhoglighting.gitbook.io/emp-doc/~/edit/drafts/-LK8bglexfioPr1D-jRv/quick-start-understanding-emp/emp-architecture) section, every Emp execution has two object: the Emp Model and the Task Manager. By default, the Task Manager will try to solve all the tasks that you have provided, and will warn you if you did not provide any.

This warning can be avoided by using the `auto_solve=false` option.

