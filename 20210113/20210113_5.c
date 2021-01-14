#include <stdio.h>

void task5() {	
    int intType;
    float floatType;
    short int shortIntType;
    unsigned long int unsignedLongIntType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of short int: %zu bytes\n", sizeof(shortIntType));
    printf("Size of unsigned long int: %zu bytes\n", sizeof(unsignedLongIntType));
    
    char charValue = 'b';
    int intValue = 100;
    long long int longValue = 11111111;
    
    printf("Size of '%c': %zu bytes\n", charValue, sizeof(charValue));
    printf("Size of %d: %zu bytes\n", intValue, sizeof(intValue));
    printf("Size of %llu: %zu bytes\n", longValue, sizeof(longValue));
    
    return;
}

int main(void) {
    task5();
	
    printf("\n");
		
    return 0;
}
