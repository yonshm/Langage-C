#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
    const float Pi = 3.14;
    float r;
    float s;

    printf("Veuiller entrez le rayon du cercle R : ");
    scanf("%f", &r);
    s = pow(r,2) * Pi;
    printf("le resulatats est : %.2f cm", s);
    return 0;
}