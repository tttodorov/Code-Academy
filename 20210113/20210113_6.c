#include <stdio.h>

void task6() {
    short value1 = -127;
    short value2 = 255;
    int value3 = 6237498;
    unsigned int value4 = 4294967292;
    long value5 = -9000000000000775845;
	
    printf("value1 = %d\n", value1);
    printf("value2 = %d\n", value2);
    printf("value3 = %d\n", value3);
    printf("value4 = %u\n", value4);
    printf("value5 = %ld\n", value5);
    
    return;
}

int main(void) {
    task6();
	
    printf("\n");
		
    return 0;
}
