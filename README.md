# ft_printf

A custom-built version of the standard printf function in C, developed as part of the 42 school curriculum to replicate its core functionality. The goal was to implement a simplified version capable of handling a range of format specifiers and argument types, while ensuring robust error handling and proper memory management.

## Variadic Functions in C

### What is a a variadic function in C?
Variadic functions in C are functions that accept a variable number of arguments.

### How do they work?
They use the `<stdarg.h>` header, which provides macros to handle the variable arguments.

- **`va_list`**:      New type to declare a list of arguments.
- **`va_start`**:     Initializes the list, indicating the last fixed argument.
- **`va_arg`**:       Retrieves each argument.
- **`va_end`**:       Finalizes the list.
