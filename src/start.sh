#!/bin/bash
# A shortcut to avoid retyping the command to execute the code, and $1 to pass an argument.
gcc main.c create.c insert.c free_table.c view.c -o main && ./main "$1"