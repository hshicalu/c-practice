
#include <stdio.h>

int main(void) {
    int num[3] = {1, 5, 10};
    int *p;
    
    p = num;

    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *(p + i));
        }
    
    }
