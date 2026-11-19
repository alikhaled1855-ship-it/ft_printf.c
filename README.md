*This project has been created as part of the 42 curriculum by alsaleh.*

# ft_printf

## Description

This project is a reimplementation of the standard C library function `printf`. The goal is to understand how variadic functions work in C, how format strings are parsed, and how formatted output can be handled using the `write` system call.

The `ft_printf` function mimics the behavior of the original `printf()` from libc, processing format strings and handling various conversion specifiers. It demonstrates fundamental concepts including variadic arguments, string parsing, and low-level output operations.

The function processes the format string character by character and delegates each conversion to a dedicated handler function, ensuring modularity and maintainability.

## Instructions

### Compilation

To compile the project and generate the static library, run:

```bash
make
```

This will create `libftprintf.a` at the root of the repository.

### Available Make Rules

- `make` or `make all` - Compiles the library
- `make clean` - Removes object files
- `make fclean` - Removes object files and the library
- `make re` - Recompiles everything from scratch
- `make bonus` - Compiles with bonus features (if implemented)

### Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror your_file.c libftprintf.a
```

Example usage:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

## Supported Conversions

The following conversion specifiers are implemented:

- `%c` - Prints a single character
- `%s` - Prints a string (as defined by common C convention)
- `%p` - Prints a void * pointer in hexadecimal format
- `%d` - Prints a decimal (base 10) number
- `%i` - Prints an integer in base 10
- `%u` - Prints an unsigned decimal (base 10) number
- `%x` - Prints a number in hexadecimal (base 16) lowercase format
- `%X` - Prints a number in hexadecimal (base 16) uppercase format
- `%%` - Prints a percent sign

## Technical Implementation

### Algorithm and Data Structure

The implementation follows a straightforward parsing approach:

1. **Main Function (`ft_printf`)**: Iterates through the format string character by character
2. **Format Handler (`handle_format`)**: Routes each conversion specifier to its dedicated handler function
3. **Conversion Functions**: Individual functions handle each type of conversion (char, string, int, hex, pointer, etc.)

**Design Choices:**

- **Sequential Parsing**: The format string is processed linearly, checking for the `%` character to identify conversion specifiers
- **Variadic Arguments**: Uses `va_list`, `va_start`, `va_arg`, and `va_end` from `<stdarg.h>` to handle variable numbers of arguments
- **Character-by-Character Output**: Uses the `write()` system call for direct output, avoiding buffering
- **Modular Design**: Each conversion type has its own handler function, making the code maintainable and extensible
- **Return Value Tracking**: Accumulates the number of characters printed to match `printf()`'s behavior

**Data Structure:**
- `va_list` is used to traverse function arguments
- A simple integer counter tracks the total number of characters written
- The format string is treated as a read-only array of characters

This approach prioritizes clarity and correctness over optimization, making it suitable for learning purposes while maintaining compatibility with the original `printf()` function.

## Resources

### Documentation and References

- **ft_printf.pdf** - The official 42 project subject containing all requirements, specifications, and guidelines for this implementation

### AI Usage

AI tools (Claude) were used for the following specific tasks:

- **README Creation**: Used to generate and structure this README.md file based on the project requirements and existing code
- **Documentation Formatting**: Assisted in organizing sections and ensuring all required elements from the subject PDF were included

**Note**: The actual ft_printf implementation code was developed independently without AI assistance, following the 42 curriculum's guidelines on foundational learning and building strong programming foundations without shortcuts.

## Project Status

**Mandatory Part**: ✅ Completed
- All required conversion specifiers implemented
- Proper handling of format strings
- Return value matches original `printf()` behavior
- No buffer management (as per requirements)

**Bonus Part**: ⚠️ Not implemented
- Flag management ('-', '0', '.', field width)
- Additional flags ('#', '+', ' ')

## Author

**alsaleh** - 42 Student

---

*For more information about 42's philosophy on learning and AI usage, please refer to the AI Instructions in the project subject.*