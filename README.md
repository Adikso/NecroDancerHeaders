# NecroDancerHeaders

This headers are specially designed for cross platform Crypt of the NecroDancer modding. Each header is generated automatically based on Windows version .pdb and Linux ELF symbols. 

Each header is containing static and non-static fields and both member and static functions POINTERS. In addition to functions pointers there are also wrappers that allows you to use classes normally without manually passing *this* pointer and makes it possible to extend game classes.

In order to ensure that created mods are cross-platform - functions that are not available in at least one of the supported platforms are prefixed with underscore which means that you SHOULD NOT USE THEM and they are only for illustrative purposes.

**This project content is not sufficient for making mods right away. You have to know how to inject code into game process and hook game functions in order to use these headers**
