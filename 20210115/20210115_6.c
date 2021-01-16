#include <stdio.h>

void task6(void);

int main(void) {
	task6();
		
	printf("\n");
		
	return 0;
}

void task6(void) {	
	float value1 = 0xAA;
	signed int value2 = 0xAA;
	unsigned int value3 = 0xAAu;
	
	printf("float value1 = 0xAA == %f\n", value1);
	printf("signed int value2 = 0xAA == %d\n", value2);
	printf("unsigned int value3 = 0xAA == %d\n", value3);
	
	return;
}
