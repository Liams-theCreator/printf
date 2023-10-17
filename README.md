
# ALX School's Printf Project

This repository hosts a custom printf implementation in C, developed as part of the ALX School curriculum. It aims to replicate the standard C library's printf function with added features like enhanced error handling, improved formatting options, and support for additional data types, providing greater flexibility.


# Prototype:

```c
int _printf(const char *format, ...);
```
# Compilation:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```
# Help:
For help run :
```bash
man ./[printf](https://github.com/Liams-theCreator/printf/blob/main/printf)
```
## Format Specifiers
| Specifiers | Description     |
| :-------- | :------- |
| `%c` | Print characters|
| `%s` | Print strings |
| `%S` | Print Non printable characters as (\x) |
| `%d and %i` | Print integers |
| `%u` | Print unsigned integers |
| `%b` | Print binary |
| `%o` | Print octal numbers |
| `%x` | Print lowercase hexadecimal |
| `%X` | Print uppercase hexadecimal |
| `%p` | Print a memory addresse |
| `%r` | Print a reversed string |
| `%R` | Print a string in ROT13 encryption |
| `%%` | Print a literal '%' character |

## Simple usage :

```c
#include "main.h"

int main(void) {
    int len;
    len = _printf("Hello, %s!\n", "World");
    return (0);
}
```


## Authors

- [@AadelAferyad](https://github.com/AadelAferyad)
- [@Liams-theCreator](https://github.com/Liams-theCreator)
