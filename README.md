# ft_printf

A custom-built version of the standard `printf` function in C, developed as part of the 42 school curriculum. The goal was to implement a simplified version that handles a range of format specifiers and argument types, while ensuring robust error handling and proper memory management.

---

## Variadic Functions in C

### What is a Variadic Function?

A variadic function in C is a function that can accept a variable number of arguments. A common example is the standard `printf` function, which adjusts its behavior based on a format string and accompanying arguments.

### How Do They Work?

Variadic functions use the `<stdarg.h>` header, which provides macros to handle the variable arguments:

- **`va_list`**  
  Declares a variable to access the list of unnamed arguments.
- **`va_start(va_list, last_fixed_arg)`**  
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
- Error handling (e.g., printing `(null)` for NULL strings)

---

## 💡 Usage Example

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```
...
## Testing
Basic unit tests were created to validate the correctness of the implementation by comparing output with the standard `printf`. You can find the tests in extra test.c file.
