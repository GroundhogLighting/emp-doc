# Quick start: understanding Emp

## Introduction

Emp is a single program that always receives two inputs: a **model** file and a **script** file. The former is meant to provide a basis of geometry, materials, location, weather and other things; while the latter is meant to perform actions and calculatons over this basis.

```bash
emp model script.lua [arguments]
```

An example of this could be

```bash
# This line of code will test if
emp - hello
```

Then Emp should print

```bash
hello from Emp!
```

What you just did was to say Emp to read no input file \(thus the dash\), and to run the `hello.lua` file located in the [EMPATH](https://groundhoglighting.gitbook.io/emp-doc/~/edit/drafts/-LImPq2tScLvWzNk3I1z/configuration). Calling Emp without any input model \(i.e. using the `emp - script` notation\) makes it start with an empty model. You can use the script itself to build the model.

The scripts for Emp are written in [Lua](https://www.lua.org/). This is a programming language designed to be embedded in other programs. So, in addition to all the Lua core functions, Emp adds several functions to interact with the model and perform calculations.

{% hint style="info" %}
Emp effectively becomes a Lua interpreter, so calling it without a model allows runing Lua scripts. This is what we will do in the [Lua for Emp users](https://groundhoglighting.gitbook.io/emp-doc/~/edit/drafts/-LImr4qJTi9ufXFlCkfS/lua-for-emp-users) section
{% endhint %}

