#include <stdio.h>

void task9() {
	float value1 = 4.9876543;
	long double value2 = 7.123456789012345678890;
	double value3 = 18398458438583853.28;
	long double value4 = 18398458438583853.39875937284928422;
	
	printf("value1 = %f\n", value1);
	printf("value2 = %Le\n", value2);
	printf("value3 = %e\n", value3);
	printf("value4 = %Le\n", value4);
    
	return;
}

int main(void) {
	task9();

	printf("\n");
		
	return 0;
}
