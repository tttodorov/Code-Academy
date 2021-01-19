#include <stdio.h>

void task13(void);

int main(void) {
	task13();
		
	printf("\n");
		
	return 0;
}

void task13(void) {
	int nA = 40; /* използвайте scanf */
	int nB = 20;
	int nX = 20;
	int nY = 30;
	if ( nA > nB && nA !=0 ) {
		printf("&& Operator : Both conditions are true.\n");
	}
	if ( nX > nY || nY != 20) {
		printf("|| Operator : Only one condition is true.\n");
	}
	if ( ! (nA > nB && nB !=0 ) ) {
		printf(" ! Operator : Both conditions are true.\n");
	} else {
		printf(" ! Operator : No more than one conditions is true.\n");
	}
	/* опитайте различни комбинации, следете приоритета на операторите */
	if ( nX >> nY || nY != 20) {
		printf("|| Operator : At least one condition is true.\n");
	}
	if ( nX >> nY ^ nY != 20) {
		printf("^ Operator : Exactly one condition is true.\n");
	} else {
		printf("^ Operator : Both conditions are true or false.\n");
	}
	
	return;
}
