
#include <stdio.h>

int main() {
    int x = 3;
    int *p;

    p = &x;

    printf("x adress is : %p\n", &x);
    printf("p adress is : %p\n", p);
    printf("p value is : %d\n", *p);
    
    }
