#include <stdio.h>
#include <math.h>

// BMI Calc with 2 Inputs //

int main() {
    float weight;
    float height;

    scanf("%f" "%f", &weight, &height); // weight in gramm, height in cm
    printf("Der BMI liegt bei: %.2f!",(weight/(height*height))*10); // print BMI with Formula

    return 0;
}
