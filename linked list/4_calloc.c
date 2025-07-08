#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int)); // allocating 5 byte of memory
    if (ptr == NULL)
    {
        printf("Memory allocation has failed");
        return 1;
    }
    else
    {
        printf("Memory allocaton is succesfull and initialize to 0");
        free(ptr);
        return 0;
    }
}