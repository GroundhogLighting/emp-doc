# Stdout and Stderr

## Introduction

If you do not want to loose your work, you will want to put your results into one or more files. However, you would want the errors and warnings to stay in a different file from the expected outputs \(i.e. the results\). This is easily done by understanding the concept of Standard Output \(`stdout`\) and Standard Error \(`stderr`\).

## Using the stderr and stdout

Maybe the easiest way to understand what the stderr and stdout is by showing an example of how to print to them from an Emp script.

Emp provides one function for warning, and Lua comes with a built-in function for printing to the stdout and one for raising an error. See, for example, the script below:

```lua
-- stdout_stderr.lua 
-- =========================

-- Tell Emp we do not want to solve any tasks
auto_solve = false

-- This function is often used to warn the user about
-- things. However, the code can continue running.
warn("Are you aware that this script is completely useless?")

-- This function can be used for printing things
-- that are actually part of the expected output
-- of the program
print("Not that useless, though... you are learning about stderr and stdout")

-- This function should be used when something wrong 
-- happened, and the script will stop running. An error
-- message is printed to the console before closing everything.
error("I can't stand it... I wont execute further lines of this script because it is useless")

-- This would also be expected output. However, since
-- there was an error raised before this, the execution
-- of the script never gets here.
print("Cool! Our script runs all the lines!")
```

As you can see, this script starts by  warning the user that it does not really do anything useful. However, if the user wants to ignore that warning, it is his problem \(although unexpected things may happen\). Then, the program does something else: prints something to the stdout. Finally, the script decides to stop running, and the final part of it does not run.

By running this using the following command

```bash
# Notice that the ./ is required 
# for scripts that are not in the EMPFILE
emp - ./stdout_stderr
```

You get

```text
Warning from Line 9: Are you aware that this script is completely useless?
Congratulations! You are learning about stdout and stderr!
stdout_stderr.lua:19: I can't stand it... I wont execute further lines of this script because it is useless
```

As you can see, the results and errors and warnings are all together. The next section of this tutorial explains how to separate these.

{% hint style="info" %}
Note that errors and warnings often show the line of the script in which the error is caused.
{% endhint %}

## Directing the stdout to a file

With this purpose, we use the `'>'` operator. Such operator tells the program to "not write the stdout to the console, but to a file"

```bash
# Notice that the ./ is required 
# for scripts that are not in the EMPFILE
emp - ./stdout_stderr > results.txt
```

Check the `results.txt` file to see what happened.

## Directing the stderr to a file

With this purpose, we use the `'2>'` operator. Such operator tells the program to "not write the stderr to the console, but to a file"

```bash
emp - ./stdout_stderr 2> errors.txt
```

## Some other useful tips

You should know that you can use both operators together

```bash
emp - ./stdout_stderr 2> errors.txt > output.txt
```

Also, find out what the `>>` and `2>>` operators do \(you can google this\)

```bash
emp - ./stdout_stderr 2>> errors.txt >> output.txt
```

## Conclusions

Controlling the stdout and the stderr allows classifying warnings and errors from expected results and messages printed during a program's execution. 

This concept needs to be understood by both the users and the writers of scripts. Users can use them to work faster and easier; and programmers, to design proper script that warn, stop and print results in a correct way.

