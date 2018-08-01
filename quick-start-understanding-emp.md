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

Then emp should answer

```bash
hello from Emp!
```

What you just did was to say Emp to read no input file \(thus the dash\), and to run the `hello.lua` file located in the [EMPATH](https://groundhoglighting.gitbook.io/emp-doc/~/edit/drafts/-LImPq2tScLvWzNk3I1z/configuration). Calling Emp without any input model \(i.e. using the `emp - script` notation\) makes it start with an empty model. You can use the script to add elements to the model.

## Emp

### Task manager

### The model



