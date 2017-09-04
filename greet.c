#include <stdio.h>
#include <stdlib.h>

extern int greet(void);

int greet(void)
{
    printf("Hello, World!\n");
    return EXIT_SUCCESS;
}
