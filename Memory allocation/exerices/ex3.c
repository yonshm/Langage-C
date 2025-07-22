#include <stdio.h>
#include <stdlib.h>

int main(){
    int *n = malloc(sizeof(int));
    
    printf("Entrée le nombres des elements dans ton tableau : ");
    scanf("%d", n);
    int *tab = calloc(*n,sizeof(int));
    int *min = malloc(sizeof(int));
    *min = 0;
    
    for(int i = 0;i<*n;i++){
        printf("Entrée element %d : ",i+1);
        scanf("%d",&tab[i]);
    }

    for(int i = 0;i<*n;i++){
        if(tab[i] < *min){
            *min = tab[i];
        }
    }
    printf("Le plus petit nombre de ca tableau est : %d", *min);
    free(n);
    free(tab);
    free(min);
    return 0;
}