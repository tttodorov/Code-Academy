#include <stdio.h>

void task7(void);

int main(void) {
	task7();
		
	printf("\n");
		
	return 0;
}

void task7(void) {
	double value1 = 0xBB;
	signed long long value2 = 0xBB;
	unsigned long long value3 = 0xBB;
	
	printf("double value1 = 0xBB == %f\n", value1);
	printf("signed long long value2 = 0xBB == %lld\n", value2);
	printf("unsigned long long value3 = 0xBB == %lld\n", value3);
	
	return;
}
