# ft_printf

A custom-built version of the standard `printf` function in C, developed as part of the 42 school curriculum. The goal was to implement a simplified version that handles a range of format specifiers and argument types, while ensuring robust error handling and proper memory management.

---

## Variadic Functions in C

### What is a Variadic Function?

A variadic function in C is a function that can accept a variable number of arguments. A common example is the standard `printf` function, which adjusts its behavior based on a format string and accompanying arguments.

### How Do They Work?

Variadic functions use the `<stdarg.h>` header, which provides macros and functions to handle the variable arguments:

- **`va_list`**  
  A data type used to declare a variable that can access a function's unnamed (variadic) arguments.
- **`va_start(list, format)`**  
  Initializes the `va_list` to start reading arguments, beginning after the last fixed parameter.
- **`va_arg(va_list, type)`**  
  Retrieves the next argument in the list, specifying its type.
- **`va_end(va_list)`**  
  Cleans up after accessing the arguments.
  
---

## 🔧 What Was Implemented

A custom version of `printf` that supports the following format specifiers:

- `%c` : character  
- `%s` : string  
- `%p` : pointer  
- `%d` / `%i` : signed integer  
- `%u` : unsigned integer  
- `%x` : hexadecimal (lowercase)  
- `%X` : hexadecimal (uppercase)  
- `%%` : percent sign

Additional features:
- Custom memory handling for dynamic buffers and edge cases
- Error handling (e.g., printing `(null)` or `(nill)` for NULL strings)

---
## File overview

- ```ft_check_flag.c```

  Delegates to helper functions based on format specifiers to handle printing and update the character count.
- ```ft_print_decimal.c```

  Prints a signed decimal integer to standard output and updates the character count.
- ```ft_print_number_hex.c```

  Prints an unsigned integer in lowercase ```%x``` or uppercase ```%X``` hexadecimal format.
- ```ft_print_pointer.c```

  Prints the address of a pointer in hexadecimal format, prefixed with ```0x```.
- ```ft_print_udecimal.c```

  
- ```ft_print_char.c```
- ```ft_printf.c```
- ```ft_print_percent.c```

  Functions to write the percentage sign.
- ```ft_print_string.c```

  Functions to write a string in the standard output.
- ```Makefile```

## 💡 Usage Example

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```
Output:
```c
Hello world, number: 42

```

## Testing
Basic unit tests were created to validate the correctness of the implementation by comparing output with the standard `printf`. You can find the tests in the test.c file.
