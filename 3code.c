/* Дана програма призначена для визначення скільки годин, хвилин та секунд пройшло з початку доби*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale (LC_CTYPE, "ua");
    int n, hours, minutes, seconds;
    
    printf("Введіть кількість секунд: ");//введення змінних
    scanf("%d", &n);
//знаходження скільки часу пройшло з початку доби 
    hours = n / 3600;
    minutes = (n % 3600) / 60;
    seconds = (n % 3600) % 60;
    //виведення результатів
    printf("Із початку доби пройшло %d годин %d хвилин %d секунд", hours, minutes, seconds);
    return 0;//кінець програми
}
