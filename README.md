# ft_printf

A custom-built version of the standard `printf` function in C, developed as part of the 42 school curriculum. The goal was to implement a simplified version that handles a range of format specifiers and argument types, while ensuring robust error handling and proper memory management.

---

## Variadic Functions in C

### What is a Variadic Function?

A variadic function in C is a function that can accept a variable number of arguments. A common example is the standard `printf` function, which adjusts its behavior based on a format string and accompanying arguments. These functions are declared with an ellipsis ```(...)``` to indicate that additional unnamed arguments may be passed, like so:

```
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = check_format(args, format);
	va_end(args);
	return (count);
}
```
  
### How Do They Work?

Variadic functions use the `<stdarg.h>` header, which provides macros to handle the variable arguments:

- **`va_list`**  
  A data type used to declare a variable that can access a function's unnamed (variadic) arguments.
- **`va_start(args, format)`**  
  Initializes a list of type `va_list` to start reading arguments, beginn after the string ```format```.
- **`va_arg(args, type)`**  
  Retrieves the next argument in the list, specifying its type.
- **`va_end(vargs)`**  
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
## 🔧 Project Structure

### File Overview

- **`ft_check_flag.c`**  
  Delegates to helper functions based on format specifiers to handle printing and update the character count.

- **`ft_print_decimal.c`**  
  Prints a signed decimal integer (`%d`/`%i`) to standard output and updates the character count.

- **`ft_print_number_hex.c`**  
  Prints an unsigned integer in lowercase (`%x`) or uppercase (`%X`) hexadecimal format and updates the character count.

- **`ft_print_pointer.c`**  
  Prints the address of a pointer in hexadecimal format, prefixed with `0x`, and updates the character count.

- **`ft_print_udecimal.c`**  
  Prints an unsigned decimal integer (`%u`) to standard output and updates the character count.

- **`ft_print_char.c`**  
  Prints a character (`%c`) to standard output and updates the character count.

- **`ft_printf.c`**  
  The main entry point of the custom `printf` implementation. Parses the format string and handles variadic arguments.

- **`ft_print_percent.c`**  
  Prints the percent sign (`%%`) and updates the character count.

- **`ft_print_string.c`**  
  Prints a string (`%s`) to standard output and updates the character count.

- **`Makefile`**  
  Builds the static library `libftprintf.a`, which includes the `ft_printf` function.

---
## 🛠️ Compilation

To compile the library, run:

```bash
make
```
To delete the files, run:
```bash
make fclean
```
To recompile the files , run:
```bash
make re
```
if you want to use the ```ft_printf``` function, then include the headerfile ```ft_printf.h``` in c. file, run:
```bash
cc main.c libftprintf.a
```

## 💡 Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! You are %d years old.\n", "Alice", 30);
    return 0;
}
```
Output:
```bash
Hello Alice! Your are 30 years old. 
```

## Testing
Basic unit tests were created to validate the correctness of the implementation by comparing output with the standard `printf`. You can find the tests in the test.c file.
