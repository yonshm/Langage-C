#include <stdio.h>
#include <stdlib.h>

int main(){
    float *pRev = malloc(sizeof(float));
    float *pVent = malloc(sizeof(float));
    // float *p = malloc(sizeof(float));
    printf("Entrer le prix de revient : ");
    scanf("%f", pRev);

    printf("Entrer le prix de vent : ");
    scanf("%f", pVent);

    if(*pRev < *pVent){
        printf("Tu as gagnée : %.2f\n", *pVent -*pRev);
    }else if(*pVent < *pRev){
        printf("Tu as une perte de : %.2f\n",*pRev - *pVent);
    }else{
        printf("Walo");
    }
    free(pRev);
    free(pVent);

}