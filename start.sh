#!/bin/bash
# A shortcut to avoid retyping the command to execute the code, and $1 to pass an argument.
gcc main.c src/create.c src/insert.c src/free_table.c src/view.c -o main && ./main 