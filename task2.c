
#include <stdio.h>

int main(void) {
    
    int a;
    a = 10;
    
    int *pa;
    // & アドレス演算子
    pa = &a;
    // * 間接演算子
    printf("%d\n", *pa);

    return 0;
    }
