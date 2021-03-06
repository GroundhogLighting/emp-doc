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

## Logical operators

Logical operators are useful for evaluating more complex expressions than any relational operation allow. For example, `'A = true if B AND C are both true'`

The relational operators in Lua are `or`, `and` and `not`. These are pretty straightforward, as they are self-explanatory.

```lua
-- logical_operators.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- define a true and a false statement
t = true
f = false

print(t and f) --> false
print(t or  f) --> true
print(not t) --> false
print(not f) --> true
```

These operators can be nested and combined with relational operators, and used for defining new variables. For instance:

```lua
-- logical_operators.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- define a true and a false statement
t = true
f = false

-- Nested logical operators
print( (t and f) or not (t or f) ) --> false

-- Combined with relational operators
print( 1 == 1 or 2 == 1 ) --> true
print( 1 == 1 and 2 == 1 ) --> false

-- Define a new variable
a = not ( 1 == 1 and 2 == 1 )
print(a) --> true
```

When assigning variables, it is relevant to consider which value do the three operators return. The Lua documentation states that:

* The `not` operator always returns `true` or `false`.
* The `and` operator returns the first argument if it is equals to `nil` or `false` , otherwise it returns the second argument
* The `or` operator returns the first argument if this is **different** from `nil` or `false`; otherwise, returns the second argument.

{% hint style="info" %}
A convenient way of defining default values is the use of expressions such as **`v = some_value or 2`** . This means "assign the value `some_value` to `v`. If `some_value` is `nil` \(i.e. it has not been assigned\), use the default value of `2 ".`
{% endhint %}

## Other operators

There are a few other operators that will be useful for Lua users in Emp. These are the length \(`#`\), and concatenation \(`..`\) operators.

The length operator, as its name states, usually returns the 'length' of the object that it is applied to. It can only be applied to Strings \(returning the number of characters in it\) and Tables \(returning the last numeric key in it\). A consecuence of the behavior of the length operator in Tables is that, when they are created without explicit keys \(i.e. Arrays\), it will return the real length of it.

```lua
-- other_operators.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Length operator in String
print(#"Hello how are you?") --> 18

-- length operator in an array
array = {"one",2,"tres"}
print(#array) --> 3

-- length operator in table
table = { 
    one = 1,
    two = 2,
    three = 3 
}

print(#table) --> 0 (i.e. this has no numeric keys)

-- Length operator in table with numeric keys
another_table = { 
    "one",    
    two = 2,
    three = 3 
}

print(#another_table) --> 1 (i.e. it has one numeric key)
```

This behavior may look a little strange and, in fact, I do not know the design reasons behind this. However, it is a reasonable behaviour as the length of a table tells you the maximum key you can use for getting a value \(i.e. `another_table[1]` does exist, while `another_table[2]` does not\).

The Concatenate operator puts together two variables of type String or Number into a single String.

```lua
-- other_operators.lua
-- ===========

-- Tell Emp that we do not intend to solve anything
auto_solve = false 

-- Concatenate
first_name = "James"
last_name = "Bond"
age = 31
print("My Name is "..last_name..", "..first_name.." "..last_name)
print("And I am "..age.." years old")
```



