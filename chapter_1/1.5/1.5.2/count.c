#include <stdio.h>

int main()
{
    long nc;

    while(getchar() != '\n') {
        ++nc;
    }
    
    printf("%ld\n", nc);
}