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

### Error due to type mismatch

As mentioned before, every variable in a Lua script has a type. When you try to perform math or other operations, these values need to 'make sense'.

Lets see the script below, in which we are trying to add a number to a string.

```lua
-- type_error.lua
-- =============

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Create two variables
v1 = 1          -- v1 has type number
v2 = "Hello"    -- v2 has type string

-- Lets try to add these, and we get an error
-- because v2 is a string and v1 is a number.
print(v1 + v2) 
```

The execution returns

```text
type_error.lua:13: attempt to add a 'number' with a 'string'
```

Even more, it is telling us that the error is in line 13.

### Changing the type of a variable

Lua belongs to a family of programming languages called 'dynamically typed' languages. This means that the type of a variable can change during the execution of the language. Lets use this concept to fix the previous example.

```lua
-- change_type.lua
-- =============

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

And now, when you run it you get:

```text
4
```

Which is what we were expecting... is not it?

## Nil

The type nil can only hold a single value: 'nil', which represents abscence of data. This value is characterized by not being of any other value.

```lua
-- nil.lua
-- =======

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Lets see if v exists
print(v)
```

As you see when we run this script, the program prints the value 'nil' to the standard out. This is because v2 is a variable that has not been assigned any value \(i.e. it basically does not exist\).

## Boolean

The type boolean can only contain two values: TRUE or FALSE. It is a pretty straightforward type, used for comparisons and other things.

```lua
-- boolean.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Asign the value of 1
is_true = true

print(is_true)
```

## Number

The type number contains any kind of real numbers, regardless if they are integers or not.

```lua
-- number.lua
-- ==========

-- Tell Emp that we do not intend to solve anything
auto_solve = false

-- Lets define two variables of type number
v1 = 2
v2 = 3

-- Lets define a third one that depends on the other two
v3 = v1/v2 -- this means, v3 is equal to v1 divided by v2

-- Lets check the result
print(v3)
```

## String

Strings represents 'chains of characters', known by most people as text

```lua
-- string.lua
-- ==========

-- Tell Emp that we do not intend to solve anything
auto_solve = false

-- Lets define two strings
v1 = 'Hello'
v2 = 'Hola'

-- Lets use them for something

-- This puts them together (i.e. concatenate them)
v3 = v1..v2
print(v3)

-- But that is not very explanatory to the user. Try this:
print(v1.." in spanish is "..v2)
```

## Function

Functions help writing code once and reusing it as many times as needed. However, we do not want functions to always do the exact same thing, but to change their behavior a bit. We can do that by providing arguments \(i.e. inputs\).

Even more, it is very likely that you want to use the results of a function for something else. In order to do this, functions can return values. See the example below.

```lua
-- function.lua
-- ============

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Define a function that greets someone.
-- The someone it greets will be passed as an argument
function greet(name)
    print("Hello, "..name)
end

greet("Ringo")
greet("Paul")
greet("George")
greet("John")

-- Define a function that receives a number
-- and returns the number squared
function square(number)
    return number * number
end

v = 2
v2 = square(v)

print(v.." squared is "..v2) 
```

{% hint style="info" %}
Did you notice that we concatenated numbers with strings in the last line?
{% endhint %}

{% hint style="info" %}
While the concept of function is present in most programming languages, not all of them consider them to be a type. This allows passing functions as arguments to other function, which can be confusing but useful.
{% endhint %}

## Table

Tables are a very important type in Lua, and are the only way of structuring data. They are associative arrays than behave as dictionaries, objects or other types used in other programming languages. Lets have a look at that using examples.

```lua
-- table.lua
-- ============

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Lets create an array (i.e. a chain of values).
-- Note that these values do not need be of the same 
-- type
array = {1,2,3, "hello"}

-- Lets print this array
inspect(array) -- 'inspect' is an Emp function, not a Lua one.

-- Lets print the last item (Note that arrays start indexing at 1)
print("The last item in 'array' is "..array[4])


-- Lets create a simple object
-- ===========================
simple_object = {
    name = "John",
    lastname = "Doe"    
}

inspect(simple_object)

-- print the data
print("The lastname of "..simple_object["name"].. " is "..simple_object["lastname"])

-- Or we can also do
print("The lastname of "..simple_object.name.. " is "..simple_object.lastname)



-- Lets create a more complex object
-- =================================
pink_floyd = {
    members = {
        { name = "David", lastname="Gilmour"},
        { name = "Nick", lastname="Mason"},
        { name = "Roger", lastname="Waters"},
        { name = "Richard", lastname="Wright"},
        { name = "Syd", lastname="Barret"},
    },
    description = "This is an awesome band!",
    greet = function()
       print("Hello, we are Pink Floyd") 
    end
}

-- Inspect the object
inspect(pink_floyd)

-- Call the function embedded in the object
pink_floyd.greet()
```

{% hint style="info" %}
Did you notice that the function 'greet' is in the table? We actually call it in the last line! To 'call' a function is to execute its code. This is done by using the '\(\)' at the end.
{% endhint %}



