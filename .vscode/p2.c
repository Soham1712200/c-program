#include <stdio.h>
int main()
{
    int fahrenheit, celsius;
    int lower, upper, step;
    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size
    fahrenheit = lower;
    printf("Fahrenheit to Celsius conversion table:\n");
    while (fahrenheit <= upper)
    {
        celsius = (5 * (fahrenheit - 32)) / 9;
        printf("%d\t%d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    return 0;
}