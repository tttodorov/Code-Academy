#include <stdio.h>

void task12(void);

int main(void) {
	task12();
		
	printf("\n");
		
	return 0;
}
		
void task12(void) {		
	int nX = 33; /* homework, input with scanf */
	int nY = 20;
	if (nX == nY) {
		printf("%d and %d are equal\n", nX, nY);
	} else {
		printf("%d and %d are not equal\n", nX, nY);
	}
	if (nX > nY) {
		printf("%d is greater than %d\n", nX, nY);
	}
	/* използвайте и останалите оператори за сравнение */
	if (nX >= nY) {
		printf("%d is greater than or equal to %d\n", nX, nY);
	}
	if (nY < nX) {
		printf("%d is less than %d\n", nY, nX);
	}
	if (nY <= nX) {
		printf("%d is less than or equal to %d\n", nY, nX);
	}
	
	return;
}
