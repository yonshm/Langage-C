#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  const float Pi = 3.14;
  const int nmbr_mois = 12;
  float note;
  int num_etudiants;
  bool admis;
  char sexe ;
  // printf("The value of Pi is: %.2f\n", Pi);
  printf("veuillez entrez la valeur de X : ");
  int x;
  scanf("%d", &x );

  printf("veuillez entrez la valeur de y : ");
  int y;
  scanf("%d", &y);

  printf("x + y : %d", x + y);
  return 0;
}