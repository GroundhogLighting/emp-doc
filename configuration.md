# Configuration

## Environmental variables

### RAYPATH



### The EMPATH

EMPATH is an environmental variable that keeps the Standard Scripts; that is, lua scripts that are meant to be used on a daily basis. Setting the empath is as simple as:

```text
# On Linux and macOS

export EMPATH=/some/directory/where/scripts/are/stored
```

```text
# On windows
set EMPATH /some/directory/where/scripts/are/stored
```

This allows, for example, checking the information within a model by doing:

```text
emp model getinfo # Note that the .lua is not strictly needed.
```

and the information regarding the number of layers, components, materials, views, workplanes and more will be written to the standard output.

## Checking that it works

By running

```text
emp
```

you should see the Usage message

```text
emp {--help|-h}        : prints this message
emp {--version|-v}        : prints version
emp {--about|-a}        : prints about
emp --checkpath        : prints the EMPATH variable
```

