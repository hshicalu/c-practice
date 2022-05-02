
#include <stdio.h>

void swap(int *pa, int *pb) {
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    }

int main(void) {

    int a;
    int b;
    a = 10;
    b = 20;
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);    

    return 0;
    }
