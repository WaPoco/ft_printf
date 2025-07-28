# ft_printf

A custom-built version of the standard printf function in C, developed as part of the 42 school curriculum to replicate its core functionality. The goal was to implement a simplified version capable of handling a range of format specifiers and argument types, while ensuring robust error handling and proper memory management.

## Variadic Functions in C

### What is a a variadic function in C?
A variadic function in C is a function that can accept a variable number of arguments. A common example is the standard printf function, which allows you to pass a varying number and type of arguments depending on the format string.

### How do they work?
They use the `<stdarg.h>` header, which provides macros to handle the variable arguments.

- **`va_list`**

   A special type used to declare a variable that will store the list of unnamed arguments.
- **`va_start(va_list, last_fixed_arg)`**

   Initializes the  list (va_list) to start reading arguments, with last_fixed_arg being the last known fixed argument before the variadic ones.
- **`va_arg(va_list, type)`**:

   Retrieves the next argument in the list, specifying its type.
- **`va_end`**

   Cleans up the list after you're done accessing the arguments.

## What was implemented
- A custom version of the `printf` function that supports different format specifiers such as:
  - `c` : character
  - `s` : string
  - `p` : pointer
  - `d` : integer
  - `i` : integer
  - `u` : unsigned integer
  - `x` : hexadecimal (lowercase)
  - `X` : hexadecimal (uppercase)
  - `%` : percent sign
- Custom memory management for handling arguments and buffers.
- Error handling and edge cases (like printing `NULL` for strings).
