#include <stdio.h>
int main(int argc, char *argv[])

// conversion of Fahrenheit to Grad Celsius //
{
    float F, C; // local variables

    scanf("%f", &F); // input

    C = (5*(F-32))/9; // defini float C with formula

    printf("%.1f Grad Fahrenheit = %.1f Grad Celsius", F, C); // print

    return 0;
}
