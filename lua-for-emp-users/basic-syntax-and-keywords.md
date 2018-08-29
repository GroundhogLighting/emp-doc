# Basic syntax and keywords

Here we describe basic concepts that will help you understand the scripts that will be shown in the next section.

## Variables

Variables are the way Lua \(and other computer languages\) allow referring to locations in memory. For instance, you can create a variable called `PI` that stores the number `3.14159`.

```lua
PI = 3.14159
```

Now that your computer has the number `3.14159` stored in its memory and it knows you decided to call it `PI`, you can use it in a very convenient way. For example:

```lua
PI = 3.14159

angle_radians = 5.125

angle_degrees = angle_radians * 180/PI 
```

As we will show later, variables do not need to be number, but also text and some other more sofisticated types. 

## Comments

Comments are lines of your script that are ignored by your computer. That means that you can write whatever you want, without worrying about syntax and other programming issues. For that reason, they become a very convenient to add any sort of information that will help you and others understand what you did.

```lua
-- Anything after a 'double dash' is ignored by the compiler

-- Lets define the value PI
PI = 3.14159 -- This should be precise enough precision

-- Initialize the angle in Radians
angle_radians = 5.125

-- Transform it to degrees by using the most common formula
angle_degrees = angle_radians * 180/PI 
```

You can also multiline comments as follows

```lua
--[[
This is a multiline comment

I can write more and more

and it will still be ignored
]]

PI = 3.14159

```



## Keywords

It is mentioned in the [Lua documentation](https://www.lua.org/manual/5.3/manual.html#3.1) that:

> Lua is a free-form language. It ignores spaces \(including new lines\) and comments between lexical elements \(tokens\), except as delimiters between names and keywords.
>
>  _Names_ \(also called _identifiers_\) in Lua can be any string of letters, digits, and underscores, not beginning with a digit and not being a reserved word. Identifiers are used to name variables, table fields, and labels.

However, not _every_ name is allowed. There are some variables that Lua has reserved for its own syntax, thus you are not allowed to use them. These are

```text
     and       break     do        else      elseif    end
     false     for       function  goto      if        in
     local     nil       not       or        repeat    return
     then      true      until     while
```

In addition to those, there are a few keywords that Emp has reserved for itself:

```text
    currentmodel      currenttaskmanager
    auto_solve        print_results
```

We have seen `auto_solve` before. In addition to that one, `print_results` allows controlling if Emp will print the results to the `stdout` or not. The others are absolutely useless to you, so just avoid them.

