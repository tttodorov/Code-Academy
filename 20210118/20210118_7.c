#include <stdio.h>

void task7(void);

int main(void) {
	task7();
		
	printf("\n");
		
	return 0;
}

void task7(void) {
	int nA = 1;
	int nB = ( nA == 1 ? 2 : 0); /* сравнява число */
	
	printf("Init A value is %d\n", nA);
	printf("Init B value is %d\n", nB);
	
	printf("Enter value for nA: ");
	scanf("%d", &nA);
	if (nA > nB) {
		printf("nA is greater than nB: nA > nB = %d > %d\n", nA, nB);
	} else if (nA == nB) {
		printf("nA is equal to nB: nA == nB = %d == %d\n", nA, nB);
	} else {
		printf("nA is less than nB: nA < nB = %d < %d\n", nA, nB);
	}
	
	return;
}
