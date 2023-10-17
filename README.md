
# ALX School's Printf Project

This repository hosts a custom printf implementation in C, developed as part of the ALX School curriculum. It aims to replicate the standard C library's printf function with added features like enhanced error handling, improved formatting options, and support for additional data types, providing greater flexibility.


# Prototype:

```c
int _printf(const char *format, ...);
```
## Format Specifiers
| Specifiers | Description     |
| :-------- | :------- |
| `%s` | Print strings |
| `%c` | Print characters|
| `%d and %i` | Print integers |
| `%u` | Print unsigned integers |
| `%p` | Print a memory addresse |
| `%%` | Print a literal '%' character |
| `%r` | Print a reversed string |
| `%b` | Print binary |
| `%o` | Print octal numbers |
| `%x` | Print lowercase hexadecimal |
| `%X` | Print uppercase hexadecimal |
| `%R` | Print a string in ROT13 encryption |
| `%S` | Print Non printable characters as (\x) |

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

- [@Liams-theCreator](https://github.com/Liams-theCreator)
