#!/bin/bash
# Un racourci pour eviter de retaper la commande pour executer le code et $1 pour faire passer un argument
gcc main.c create.c insert.c free_table.c view.c -o main && ./main "$1"