---
description: Introduction to some Lua operators
---

# Operators

## Arithmetic operators

There are several arithmetic operators that Lua offers out of the box. These are pretty common among computational tools \(e.g. excel\), so there might be nothing really new here for you.

```lua
-- operators.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Define two variables
a = 2
b = 3

-- Addition
print(a.." + "..b.." = "..a+b)

-- Substraction
print(a.." - "..b.." = "..a-b)

-- Multiplication
print(a.." * "..b.." = "..a*b)

-- Float division
print(a.." / "..b.." = "..a/b)

-- Floor division
-- According to Lua's documentation, this is:
--[[
    "a division that rounds the quotient towards 
    minus infinity, that is, the floor of the 
    division of its operands"
    
    That is, it always returns an integer 
]]
print(a.." // "..b.." = "..a//b)

-- Modulo
print(a.." % "..b.." = "..a%b)

-- Exponentiation
print(a.." ^ "..b.." = "..a^b)

-- Unary minus
print(" (-"..b..") = "..-b)
```

And the result will be

```text
2 + 3 = 5
2 - 3 = -1
2 * 3 = 6
2 / 3 = 0.66666666666667
2 // 3 = 0
2 % 3 = 2
2 ^ 3 = 8.0
 (-3) = -3
```

## Relational operators

In addition to add or substract, it will sometimes be relevant to compare values \(not just numbers\). In order to do this, Lua offers the relational operators. These operators always return true or false \(i.e. a boolean\) and never other kind of value. The available operators are:

```lua
-- relational_operators.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Define two variables
a = 2
b = 3

-- equality
print(a == b)

-- inequality
print(a ~= b)

-- less than
print(a < b)

-- greater than
print(a > b)

-- less or equal than
print(a <= b)

-- greater or equal than
print(a >= b)


```

Which results in

```text
false
true
true
false
true
false
```

{% hint style="info" %}
Have in mind that the `==` operator first compares the type of the variables. So, the expression `12 == "12"` will be false. As of how other operands work when variables are of different type, I do not know.
{% endhint %}



