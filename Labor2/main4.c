#include <stdio.h>

//Calc BMI with if-Statement //

int main() {

    float w, h, BMI; // local Variable

    scanf("%f %f", &w, &h); // input weight (g), height (cm)

    BMI= w/(h*h)*10; // Calc BMI

    // if Statement 3 times //

    if (BMI < 18.4) {
        printf("Untergewicht %.1f", BMI);
    }

    if (18.4 < BMI && BMI < 24.9) {
        printf("Normalgewicht %.1f", BMI);
    }

    if (BMI >= 24.9) {
        printf("Uebergewicht %.1f", BMI);
    }

    return 0;
}
