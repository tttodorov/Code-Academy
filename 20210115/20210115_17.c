#include <stdio.h>

void task17(void);

int main(void) {
	task17();
		
	printf("\n");
		
	return 0;
}

const float PI = 3.14159;

void circle_area(float R) {
	printf("circle area R = %f: %f\n", R, PI * R * R);
	
	return;
}

void ellipse_area(float R1, float R2) {
	printf("ellipse area R1 = %f, R2 = %f: %f\n", R1, R2, PI * R1 * R2);
	
	return;
}

void task17(void) {
	
	circle_area(1);
	circle_area(1.5);
	circle_area(13);
	
	ellipse_area(1, 1);
	ellipse_area(1.5, 2.5);
	ellipse_area(13, 1.5);

	return;
}
