
# ft_printf

ft_printf is a custom implementation of the C standard library function `printf`. This project aims to recreate the functionality of `printf`, handling various format specifiers and providing formatted output.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The ft_printf project involves writing a function that mimics the behavior of the standard `printf` function in C. This function handles multiple format specifiers, including integers, characters, strings, and more, and outputs formatted data to the standard output.

## Features

- Supports various format specifiers:
  - `%c` for characters
  - `%s` for strings
  - `%d` and `%i` for integers
  - `%u` for unsigned integers
  - `%x` and `%X` for hexadecimal numbers
  - `%%` for a literal percent sign
- Handles width and precision modifiers.
- Supports flags for formatting (e.g., `-`, `0`, `.`).

## Requirements

To build and run ft_printf, you need:
- A UNIX-like operating system (Linux, macOS, etc.)
- `gcc` compiler
- `make` utility

## Installation

Clone the repository to your local machine:

```sh
git clone https://github.com/ddcsoftdev/ft-printf.git
cd ft-printf
```

Build the project using `make`:

```sh
make
```

This will compile the `libftprintf.a` library.

## Usage

### Including the Function

To use the `ft_printf` function in your project, include the header file and link the compiled library.

```c
#include "ft_printf.h"
```

### Function Prototype

```c
int ft_printf(const char *format, ...);
```

### Example

Here is an example of how to use the `ft_printf` function:

```c
#include "ft_printf.h"

int main(void)
{
    int number = 42;
    char character = 'A';
    char *string = "Hello, World!";

    ft_printf("Number: %d
", number);
    ft_printf("Character: %c
", character);
    ft_printf("String: %s
", string);

    return 0;
}
```

### Compilation

Compile your program with the `ft_printf` implementation:

```sh
gcc -o example example.c libftprintf.a
```

### Running the Program

Run the compiled program:

```sh
./example
```

This will produce output similar to:

```
Number: 42
Character: A
String: Hello, World!
```

## Contributing

Contributions are welcome! Please fork the repository and open a pull request to add new features, fix bugs, or improve documentation.

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
