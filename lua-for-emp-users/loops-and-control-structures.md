# Loops and control structures

## If

If statements are useful for executing different actions depending on certain conditions. It allows doing something like "if the given value is too big, warn the user; if not, execute some code" or "if the value is zero, send an error and stop; if not, do something useful" \(or some less dramatic alternatives\).

Lets see an example of a common case. As you may know, we cannot divide by Zero \(it does not make any sense or is infinite\). 

```lua
-- if.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

a = 2
b = 1

if a == 0 then
    -- This will fail because we want to divide by a.
    error("value of 'a' must be greater than zero")
else
    -- Now that we know that a is not zero, lets divide
    print(b/a) --> 0.5
end
```

If structures can also have several conditions. In such cases, only the code after the first true condition will be executed. If none is true, the 'else' block will be executed. For instance:

```lua
-- if.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

a = 2
b = 1

if a == 0 then
    -- This will fail because we want to divide by a.
    error("value of 'a' must be greater than zero")
elseif a == 1 then
    -- Trivial result... result is b
    print(b) --> 1 or whatever is the value of b
elseif a > 99999999999999 then
    -- Lets assume a value of Zero
    print(0) --> 0
else
    -- Now that we know that a is not zero, lets divide
    print(b/a)
end
```

{% hint style="info" %}
The conditions may be more complex than the ones shown above. For example ``**`if a ~= 1 and a ~= 2 then ...`**
{% endhint %}

## While

The while is the first loop we will evaluate. This loop is used to run repetitive tasks until a certain condition is false.

```lua
-- while.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

a = 1
while a < 4 do
    print(a)
    -- increse the value of a... otherwise, 
    -- we fall in an into an infinite loop
    a = a + 1 
end

-- this prints
--[[
1
2
3
]]

-- This is an infinite loop
while true do
    a = a + 1
end
```

## Repeat

## For



