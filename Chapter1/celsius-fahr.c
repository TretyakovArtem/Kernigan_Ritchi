#include <stdio.h>

/*
    вывод таблицы температур по Цельсию и Фаренгейту
*/

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // нижняя граница температур в таблице
    upper = 300; // верхняя граница
    step  = 20; // величина шага


    celsius = lower;

    printf("Таблица соответствия температур по Цельсию и Фаргенгейту\n");

    while(celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}