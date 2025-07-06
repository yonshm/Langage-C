#include <stdio.h>
#include <stdlib.h>

int main(){
    int q;
    float p;
    float resultat = p * q;
    printf("Veuillez saisir la quantite vendus : ");
    scanf("%d", &q);

    printf("Veuillez saisir le prix du produit : ");
    scanf("%f", &p);
    
    printf("le chaifre d'afaire : %.2f", resultat);
    return 0;
}
