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

## Emp architecture

Internally, Emp contains two main objects \(in addition to the Lua interpreter\). One is the Task Manager the other is the Model. The following sections describe the Task Manager, as the model is pretty straightforward to understand.

### Task manager

The Task Manager is what handles all the metrics and other things you ask from Emp regarding a specific model. For example, you have a model of a house or an office, and you want to calculate Useful Daylight Illuminance and the Daylight Autonomy of two workplanes in it. What the Task Manager will do is:

1. Register that you want to calculate the UDI and DA of Workplane1 and Workplane2. These are called **Tasks**, ****and **the Task Manager is task-based**
2. We know that both UDI and DA require a Climate Based Daylight Simulation \(i.e. **the task manager expands the tasks by precalculating their dependencies**\). However, the same daylight simulation can be used for calculating both metrics. Thus, the Task Manager will only calculate one Climate Based Daylight Simulation for each workplane \(i.e. **the task manager removes redundant tasks**\)
3. The Task Manager will calculate all your tasks and their dependencies by taking advantage of all the cores in your machine. That is, **the task manager works in parallel**



