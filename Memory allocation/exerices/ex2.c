#include <stdio.h>
#include <stdlib.h>
// somme des nombres impaires de 0 à n
int main(){
    int *n = calloc(1,sizeof(int));
    int *somme = calloc(1,sizeof(int));
    *somme = 0;
    printf("Entrée un nombre : ");
    scanf("%d", n);
    
    for(int i = 1;i<=*n;i+=2){
            *somme += i;
        
    }
    printf("La somme est : %d", *somme);
    free(n);
    free(somme);
    return 0;
}