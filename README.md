# Object-Oriented Programming Project

## Overview
This project demonstrates key Object-Oriented Programming (OOP) concepts in C++, including **encapsulation**, **constructors**, **data validation**, and **class structure** through the implementation of a simple `Date` class.

The project serves as an introduction to OOP design principles, compilation workflow, and header/source file separation.

---

## Features
- Definition of a `Date` class with:
  - Private attributes: `day`, `month`, and `year`
  - Input validation via a private helper method `checkDate()`
  - Constructors for default and custom initialization
  - Getters and setters for controlled access
  - A display method `affiche()` for formatted output

---

## Project Structure
```

project_root/
│
├── include/
│   └── Date.hpp          # Header file containing the class declaration
│
├── src/
│   └── Date.cpp          # Source file with the class implementation
│
├── main.cpp              # Entry point that creates and displays a Date object
│
└── README.md             # Project documentation

````

---

## Compilation and Execution

### Using `g++`
```bash
g++ main.cpp src/Date.cpp -Iinclude -o main
./main
````

### Using `make` (optional)

If a `Makefile` is provided:

```bash
make
./main
```

---

## Concepts Illustrated

* **Encapsulation:** Data members are private and accessed via getters/setters.
* **Validation:** Dates are checked using the private `checkDate()` function.
* **Abstraction:** The interface (`Date.hpp`) is separate from implementation (`Date.cpp`).
* **Constructors:** Overloaded constructors allow flexibility in object creation.
* **Composition:** Demonstrates combining multiple source files into one executable.

---

## Example Output

```
Default date: 14/10/2025
```

---

## Requirements

* **C++17** or newer
* **g++** compiler (or any standard-compliant C++ compiler)

---

## Future Improvements

* Add leap-year validation
* Support for date arithmetic (add/subtract days)
* Overload operators (`<<`, `==`, `+`, etc.)
* Unit tests for robustness

---

## Author

Developed as part of an Object-Oriented Programming module to practice class design, modular compilation, and clean C++ coding conventions.

```

---
