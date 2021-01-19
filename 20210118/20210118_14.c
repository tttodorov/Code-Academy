#include <stdio.h>

void task14(void);

int main(void) {
	task14();
		
	printf("\n");
		
	return 0;
}

void task14(void) {	
	int nX = 1, nY = 2;
	printf("\nInit values: X= %d, Y= %d\n", nX, nY);
	nX = 1 + 2, 2 * 3, 3 + 4; /* в изразите може да има ф-ции*/
	nY = ( 7 * 8, 8 + 9, 9 - 4);
	printf("\nX= %d, Y= %d\n", nX, nY);
	
	return;
}
