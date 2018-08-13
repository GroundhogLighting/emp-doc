# Emp architecture

## Introduction

Internally, Emp contains two main objects \(in addition to the Lua interpreter\). One is the Task Manager the other is the Model. The following sections describe the Task Manager and the model.

## The model

The first argument given to emp is a model. These models can be written in Lua \(i.e. programmatically create a model through the Emp API\) or with another Cad program \(e.g. Sketchup\).

When Emp reads the given model, the original file is not modified. However, through the given script, it is possible to add, delete or modify objects of the model. Those changes will only last the execution time of Emp.

{% hint style="info" %}
Your input model is only read by Emp. No changes are made to it, and whatever your script does to the model only lasts the execution of the program
{% endhint %}

## The Task manager

The Task Manager is what handles all the metrics and other things you ask from Emp regarding a specific model. For example, you have a model of a house or an office, and you want to calculate Useful Daylight Illuminance and the Daylight Autonomy of two workplanes in it. What the Task Manager will do is:

1. Register that you want to calculate the UDI and DA of Workplane1 and Workplane2. These are called **Tasks**, ****and **the Task Manager is task-based**
2. We know that both UDI and DA require a Climate Based Daylight Simulation \(i.e. **the task manager expands the tasks by precalculating their dependencies**\). However, the same daylight simulation can be used for calculating both metrics. Thus, the Task Manager will only calculate one Climate Based Daylight Simulation for each workplane \(i.e. **the task manager removes redundant tasks**\)
3. The Task Manager will calculate all your tasks and their dependencies by taking advantage of all the cores in your machine. That is, **the task manager works in parallel**

{% hint style="info" %}
The Task Manager is always empty at the beggining of each Emp execution. In order to perform calculations, Tasks need to be queued in it. Even if these tasks come with the model, they need to be read and pushed to the Task Manager within the Lua script.
{% endhint %}

## Conclusions

When you work with Emp, the program reads the input model without touching it \(if given\) and runs the given lua script. The original model file is not modified, but you can interact with it temporalily while Emp is running. 

The Task Manager needs to be populated with Tasks, which can be embedded in the model itself. After beeing populated, the Task Manager will run all your tasks in an efficient way.

