# Binary Tree Program

## Overview

This program implements a binary tree structure with functionalities to create, insert, and view nodes. The application is designed to demonstrate tree operations and outputs results into a **Makefile** for better understanding of the tree structure.

## Features

1. **Create Nodes**: Dynamically creates a binary tree with specified values.
2. **Insert Values**: Allows insertion of integer values into the tree.
3. **View Tree**: Displays the current structure of the tree.
4. **Free Memory**: Releases memory after tree operations to prevent memory leaks.

---

## Requirements

- **Operating System**: Ubuntu 24.04.1 LTS (or compatible)
- **Compiler**: GCC (GNU Compiler Collection)
- **Libraries Used**:
  - `<stdio.h>` for file and I/O operations
  - `<stdlib.h>` for memory allocation
  - `<string.h>` for string manipulation

---

## Compilation

To compile the program, use the following command:

```bash
gcc main.c src/create.c src/insert.c src/free_table.c src/view.c -o main
```

---

## Usage

### Basic Usage

1. **Run the Program**:
   ```bash
   ./main
   ```
   This initializes the binary tree and releases memory.

2. **View Tree**:
   ```bash
   ./main -v
   ```
   This option displays the structure of the tree saved in the **Makefile**.

3. **Insert Nodes**:
   ```bash
   ./main -n <value>
   ```
   Replace `<value>` with the desired integer. This adds nodes with values ranging from `0` to `<value>` into the tree.

---

## File Structure

- **`main.c`**: The entry point of the program, handling arguments and calling tree operations.
- **`create.c`**: Handles the creation of tree nodes.
- **`insert.c`**: Contains the logic for inserting values into the tree.
- **`free_table.c`**: Responsible for freeing memory used by the tree.
- **`view.c`**: Displays the tree structure.

---

## Output

- **Makefile**:
  - Generated during execution.
  - Contains a textual representation of the binary tree structure.
  - Example:
    ```
    root = 0
    left = 2 on level 0
    right = 1 on level 0
    ```

---

## Memory Management

The program ensures proper memory allocation and deallocation:
- Nodes are dynamically allocated using `malloc`.
- Memory is freed using the `freeTable()` function to avoid leaks.

---

## Future Enhancements

1. Add error handling for invalid input arguments.
2. Enhance tree visualization in the terminal.
3. Extend functionalities to allow deletion of nodes.
4. Delete a specific section in binery tree.
