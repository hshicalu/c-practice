
#include <stdio.h>

int main(void) {
    // Check the size of int memory -> 4
    printf("The size of int is : %lu\n", sizeof(int));
    // Check the size of float memory -> 4
    printf("The size of float is : %lu\n", sizeof(float));
    // Check the size of double memory -> 8
    printf("The size of double is : %lu\n", sizeof(double));
    // Check the size of char memory -> 1
    printf("The size of char is : %lu\n", sizeof(char));
    // Check the size of unsigned char memory -> 1
    printf("The size of unsigned char is : %lu\n", sizeof(unsigned char));
    // Check the size of short memory -> 2
    printf("The size of short is : %lu\n", sizeof(short));
    // Check the size of long memory -> 8
    printf("The size of long is : %lu\n", sizeof(long));
    // Check the size of unsigned long memory -> 8
    printf("The size of unsigned long is : %lu\n", sizeof(unsigned long));
    return 0;
    }
