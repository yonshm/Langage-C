#include <stdio.h>
#include <stdlib.h>

//programme qui calcule la somme et la moyenne d'un programme


int main(){
    int n;
    float sum;
    float moyenne;

    printf("Enter number of cases : ");
    scanf("%d",&n);
    float *arr = malloc(sizeof(float) * n);

    for(int i = 0;i < n;i++){
        printf("Enter score Number %d : ",i+1);
        scanf("%f",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }

    moyenne = sum / n;
    printf("somme : %.2f\n",sum);
    printf("moyenne %.2f : ",moyenne);
    free(arr);
    return 0;
}