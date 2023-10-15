#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

void print_lline()
{
    printf("\n================================================================================================================================\n");
    printf("\n\n");
}

int main(void)
{
    int len, len2;

    // Test case 1
    print_lline();
    void *p1 = (void *)0x7fff5100b608;
    len = _printf("%p", p1);
    printf("\n\n");
    len2 = printf("%p", p1);
    printf("\n\n");

    fflush(stdout);

    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("\n\n");
        fflush(stdout);
        return 1;
    }

    // Test case 2
    print_lline();
    void *p2 = NULL;
    len = _printf("%p", p2);
    printf("\n\n");
    len2 = printf("%p", p2);
    printf("\n\n");

    fflush(stdout);

    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("\n\n");
        fflush(stdout);
        return 1;
    }

    // Test case 3
    print_lline();
    void *p3 = (void *)0x7fff5100b6f8;
    len = _printf("Can you print an address?\n%p\nNice!\n", p3);
    printf("\n\n");
    len2 = printf("Can you print an address?\n%p\nNice!\n", p3);
    printf("\n\n");

    fflush(stdout);

    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("\n\n");
        fflush(stdout);
        return 1;
    }

    // Test case 4
    print_lline();
    void *p4 = (void *)0x7fff5100b6f8;
    void *p5 = (void *)0x7faf51f0f608;
    void *p6 = (void *)0x6ff42510b6f8;
    void *p7 = (void *)0x7fff510236f8;
    len = _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p4, p5, p6, p7);
    printf("\n\n");
    len2 = printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p4, p5, p6, p7);
    printf("\n\n");

    fflush(stdout);

    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("\n\n");
        fflush(stdout);
        return 1;
    }

    // Test case 5
    print_lline();
    len = _printf("");
    printf("\n\n");
    len2 = printf("");
    printf("\n\n");

    fflush(stdout);

    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("\n\n");
        fflush(stdout);
        return 1;
    }

    // Test case 6
    print_lline();
    void *p8 = (void *)-1;
    len = _printf("Can you print an address?\n%p\nNice!\n", p8);
    printf("\n\n");
    len2 = printf("Can you print an address?\n%p\nNice!\n", p8);
    printf("\n\n");

    fflush(stdout);

    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("\n\n");
        fflush(stdout);
        return 1;
    }

    // Test case 7
    print_lline();
    void *p9 = (void *)0x7fff5100b6f8;
    len = _printf("%pppp", p9);
    printf("\n\n");
    len2 = printf("%pppp", p9);
    printf("\n\n");

    fflush(stdout);

    if (len != len2)
    {
        printf("Lengths differ.\n");
        printf("\n\n");
        fflush(stdout);
        return 1;
    }

    return 0;
}
