# Values and types

## Introduction

"Types" are meant to represent different kinds of information. For example, an answer to a question may be Yes or No \(or true or false\); but a person's name is unlikely be represented by any of those words. Similarly, types can also represent relationships between data. For example, it is obvious that we can add two numbers \(e.g. `1+2=3)`. However, what happens if you try to add a number with your name? \(e.g. `1+"John" = ????`\). That is why types are useful and need to be understood.

There are [eight types](https://www.lua.org/manual/5.3/manual.html#3.3.4) in the Lua programming language, but we will only cover six of them in this tutorial. These six types are:

| **Type** | **Example** |
| :--- | :--- |
| nil | _... we will talk about this later_ |
| boolean | TRUE, FALSE |
| number | 1, 2, 1.21, 3.141592 |
| string | "hello", "john", "I do not have a cat" |
| function | _... we will talk about this later_ |
| table | { 1 = 2.1,    2= "john",    3 = false } |

Lua belongs to the family of "dynamically typed" programming languages. That means that a variable can change its type within the script. Lets see an example of types being used.

### Values and types example 1

```lua
-- Any code after the '--' operator will not be run... 
-- so lets use that for providing explanation


-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Create two variables
v1 = 1          -- v1 has type number
v2 = "Hello"    -- v2 has type string

-- Lets try to add these, and we get an error
-- because v2 is a string and v1 is a number.
print(v1 + v2) 
```

### Values and types example 2

```lua
-- Any code after the '--' operator will not be run... 
-- so lets use that for providing explanation


-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Create two variables
v1 = 1          -- v1 has type number
v2 = "Hello"    -- v2 has type string

-- change the type of v2 to number
v2 = 3

-- Lets try to add these, and now it
-- works!
print(v1 + v2) 
```

## Type nil

The type nil can only hold a single value: 'nil', which represents abscence of data. This value is characterized by not being of any other value.

```lua
-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Lets see if v exists
print(v)
```

As you see when we run this script, the program prints the value 'nil' to the standard out. This is because v2 is a variable that has not been assigned any value \(i.e. it does not exist, basically\).

## Boolean

The type boolean can only contain two values: TRUE or FALSE. It is a pretty straightforward type, used for comparisons and other things.

```lua
-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Asign the value of 1
v = 1

-- Lets see if v is equal to 1
print(v == 1)

-- Lets see if v is equal to 2
print(v == 2)
```

## Number

The type number contains any kind of real numbers, regardless if they are integers or not.

