# Inventory_C

A command-line inventory management system written in **C** as part of my journey to learn systems programming and software development.

This project was built to practice core C programming concepts including:

* Structs
* Arrays
* Header files
* Multi-file project organization
* User input
* Functions
* Modular programming
* Basic memory management concepts

Although this project is still a work in progress, it represents an important milestone in my progression from writing simple programs to building larger applications.

---

## Features

Current functionality includes:

* Add items to an inventory
* Remove items from an inventory
* Separate inventory categories:

  * Food
  * Weapons
  * Armor
  * Potions
* Menu-driven command-line interface
* Modular source code split across multiple `.c` and `.h` files

---

## Project Structure

```text
Inventory_C/
│
├── src/
│   ├── main.c
│   ├── inventory.c
│   ├── menu.c
│   └── ...
│
├── include/
│   ├── inventory.h
│   ├── menu.h
│   └── ...
│
├── README.md
└── Makefile (if applicable)
```

> *The exact directory structure may vary slightly depending on the version of the project.*

---

## Building

Compile the project using GCC:

```bash
gcc *.c -o inventory
```

Or, if using a Makefile:

```bash
make
```

Run the program:

```bash
./inventory
```

---

## Example

```text
====== Inventory Menu ======

1. Food
2. Weapons
3. Armor
4. Potions
5. Exit

Select an option:
```

Users can navigate through each inventory category to add or remove items.

---

## Current Limitations

This project is intentionally simple and has several known limitations that I plan to improve as I continue learning C.

Some improvements include:

* Better input validation
* Preventing inventory overflow
* Reducing duplicated code between menus
* Replacing recursive menu calls with iterative loops
* Saving/loading inventory from files
* Improved error handling
* More flexible inventory sizes

---

## Learning Goals

This project was created to strengthen my understanding of:

* Modular C projects
* Designing larger programs
* Separating declarations from implementations
* Writing reusable functions
* Organizing code into multiple source files
* Debugging and testing C programs

---

## Future Plans

Planned improvements include:

* File persistence
* Dynamic memory allocation
* Generic inventory handling
* Searching and sorting inventory items
* Item quantities
* Item statistics
* Better user interface
* Unit testing
* Cross-platform compatibility

---

## Lessons Learned

Working on this project taught me:

* How quickly duplicated code becomes difficult to maintain.
* The importance of validating user input.
* Why modular design makes larger projects easier to manage.
* How to organize a multi-file C application.
* The value of incremental development—building a working version first and refining it over time.

This project marks an important step in my journey toward becoming a stronger systems and software engineer.

---

## Author

**Joseph Williams**

Built as a personal learning project while studying the C programming language and software engineering fundamentals.
