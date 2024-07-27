# Simple Hash Table in C

This project is an implementation of a simple hash table in the C programming language. It includes basic operations such as insertion, search, and deletion of key-value pairs.

## Features

- **Insertion**: Add new key-value pairs to the hash table.
- **Search**: Retrieve the value associated with a given key.
- **Deletion**: Remove key-value pairs from the hash table.
- **Collision Handling**: Uses open addressing with double hashing to resolve collisions.

## Requirements:

- **gcc**

## Usage

To use this hash table implementation, you can compile the provided source files and run the example program. Here are the steps:

### Compilation

1. **Clone the repository** (if not already done):

   ```bash
   git clone https://github.com/timmythecreator/c-hash-table.git

2. **Navigate to the project directory:**

    ```bash
    cd c-hash-table

3. **Compile the project:**

    ```bash
    gcc -o hash main.c hash_table.c prime.c -lm

### Running the Example

After compiling, you can run the example program that demonstrates the hash table operations:

    ```bash:
    ./hash