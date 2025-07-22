#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, a, somme = 0;
    float moyenne = 0.0;
    char reponse;
    printf("Veuillez saisir la taille du tableau : ");
    scanf("%d", &n);

    int *tab = calloc(n,sizeof(int));

    for(int i = 0;i<n;i++){
        printf("Entrée element %d : ",i+1);
        scanf("%d",&tab[i]);
        somme += tab[i];
    }
    moyenne = (float)somme / n;

    printf("Le somme est : %d\n", somme);
    printf("Le moyenne est : %.2f\n", moyenne);

    printf("Veux-tu faire un autre calcul O/N: ");
    scanf(" %c", &reponse);
    while (reponse != 'N')
    {
        for(int i = 0;i < n;i++){
            printf("Element T[%d] : %d\n",i, tab[i]);
        }
        printf("Veuillez saisir la taille a ajouter : ");
        scanf("%d", &a);

        n = n + a;
        tab = realloc(tab, n * sizeof(int));

        
        for(int i = n-a;i<n;i++){
            printf("Entrée element %d : ",i+1);
            scanf("%d",&tab[i]);
            somme+= tab[i];
        } 
        moyenne = (float)somme / n;

        printf("Le somme est : %d\n", somme);
        printf("Le moyenne est : %.2f\n", moyenne);
        printf("Veux-tu faire un autre calcul O/N: ");
        scanf(" %c", &reponse);      
    }
    free(tab);
    return 0;
}

