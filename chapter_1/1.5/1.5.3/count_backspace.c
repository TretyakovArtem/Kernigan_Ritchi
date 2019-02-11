#include <stdio.h>

int main()
{
    long cn;

    int c;

    cn = 0;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            ++cn;
        }
    }
    printf("%ld\n", cn);
}