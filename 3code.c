#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale (LC_CTYPE, "ua");
    int n, hours, minutes, seconds;
    
    printf("Введіть кількість секунд: ");
    scanf("%d", &n);

    hours = n / 3600;
    minutes = (n % 3600) / 60;
    seconds = (n % 3600) % 60;
    
    printf("Із початку доби пройшло %d годин %d хвилин %d секунд", hours, minutes, seconds);
    return 0;
}