#include <stdio.h>

// enum day{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
typedef enum{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY}day;
int main(){
    // enum day today = SATURDAY;
    day today = SATURDAY;
    printf("%d",today); 
}