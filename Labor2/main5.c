#include <stdio.h>

// blood alcohol concentration Calc //

int main() {

    float w, v, e;
    char r;
    const float p = 0.8f;

    scanf("%c %f %f %f", &r, &w, &v,&e); // gender for reduction value, weight (kg), volume (ml), alc percentage

    if ( r == 'm' ) {

        printf("%.2f Promille", (v * e * p)/(w*0.7)/100); // Formula for blood-alc-concentration man

    } else if ( r == 'w' ) {

        printf("%.2f Promille", (v * e * p)/(w*0.6)/100); // Formula for blood-alc-concentration woman

    } else if (r == 'k') {

        printf("%.2f Promille", (v * e * p)/(w*0.8)/100); // Formula for blood-alc-concentration kid

    }

    return 0;
}
