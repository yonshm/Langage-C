#include <stdio.h>
void main() {
    int i = 1;
    int *p = &i;
    printf("%d%d%d\n", *p, i++, (*p)++);
}