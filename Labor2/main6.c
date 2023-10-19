#include <stdio.h>
#define SPITZE 1
#define GUT 2
#define BEFRIEDIGEND 3
#define AUSREICHEND 4
#define DURCHGEFALLEN 5
#define JA 1
#define NEIN 0

//Switch case Statment instead of if Statment //

int main(void) {
    unsigned int note, bestanden;
    printf("Geben Sie bitte eine Note (1-5) ein: ");
    scanf("%u", &note);

    switch (note) {

        case SPITZE:
            bestanden = JA;

        case GUT:
            bestanden = JA;

        case BEFRIEDIGEND:
            bestanden = JA;

        case AUSREICHEND:
            bestanden = JA;

            break;

        default:
            bestanden = NEIN;

    }

    bestanden ? printf("\nOK!") : printf("\nNICHT bestanden");
    return 0;
}
