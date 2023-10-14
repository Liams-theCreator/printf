#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    int len_1 = 0, len_2 = 0;

    /* ===========> %c <=========== */
    printf("----------------------\n");
    printf("----> CHAR CASES <----\n");
    printf("----------------------\n");
    _putchar(10);
    len_1 = printf("Expected output:    %d\n", 53);
    len_2 = _printf("Current output:     % d\n", 53);
    _printf("Current output:     %$\n", 53);
    _printf("Current output:     %.d hellp\n", 53);
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %cc\n", 'a');
    len_2 = _printf("Current output:     %cc\n", 'a');
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);
    len_1 = printf("Expected output:    %chello\n", 'a');
    len_2 = _printf("Current output:    %chello\n", 'a');
    return (0);
}
