#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Test memory leak
    char *memory_leak = malloc(sizeof(char) * 10);
    printf("%s", memory_leak);
    return 0;
}