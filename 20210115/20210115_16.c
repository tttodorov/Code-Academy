#include <stdio.h>

void task16(void);

int main(void) {
	task16();
		
	printf("\n");
		
	return 0;
}

void circle_area(float R) {

	const float PI = 3.14159;
	
	printf("circle area R = %f: %f\n", R, PI * R * R);
	
	return;
}

void task16(void) {
	circle_area(1);
	circle_area(1.5);
	circle_area(13);

	return;
}
