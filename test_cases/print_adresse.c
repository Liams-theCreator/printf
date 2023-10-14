#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../main.h"

int main(void)
{

    int x = 0;
    int *p = &x;
    int len_1, len_2;

    /* ===========> %p <=========== */
    printf("----------------------\n");
    printf("----> ADDRS CASES <---\n");
    printf("----------------------\n");

    len_1 = printf("%p\n", p);
    len_2 = _printf("%p\n", p);
    assert(len_1 == len_2);

    len_1 = printf("%p\n", (void *)0);
    len_2 = _printf("%p\n", (void *)0);
    assert(len_1 == len_2);
    return 0;
}
