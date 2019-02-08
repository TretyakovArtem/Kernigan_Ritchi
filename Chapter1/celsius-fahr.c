#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

/*
    вывод таблицы температур по Цельсию и Фаренгейту
*/

int main()
{
    float fahr, celsius;
    int lower, upper, step;


    celsius = lower;

    printf("Таблица соответствия температур по Цельсию и Фаренгейту\n");

    
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    

    //while(celsius <= upper) {
    //    fahr = (9.0/5.0) * celsius + 32;
    //    printf("%3.0f\t%6.1f\n", celsius, fahr);
    //    celsius = celsius + step;
    //}
}