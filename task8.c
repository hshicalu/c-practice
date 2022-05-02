
#include <stdio.h>

int main(void) {
    
    int a = 1;
    // printf("%d\n", a);
    int *p;
    float *q;
    p = &a;
    q = &a;
    printf("%d\n", *p);
    printf("%f\n", *q);
    return 0;
    }
