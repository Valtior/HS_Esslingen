#include <stdio.h>
int main()
{
    int i1, i2, i3;
    // noch ein Beispiel mit scanf
    scanf("%d %d %d", &i1, &i2, &i3);
    printf("Ganze Zahlen: %d, %d, %d \n", i1, i2, i3);

    float f;
    scanf("%f", &f); // Ihr Code hier
    printf("Fliesskommazahl mit Formatangabe: %.2f \n", f);

    char s[100];
    scanf("%s",
          s);// Ihr Code hier
    printf("Zeichenkette: %s \n", s);
    return 0;
}
