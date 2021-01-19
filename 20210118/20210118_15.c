#include <stdio.h>

void task15(void);

int main(void) {
	task15();
		
	printf("\n");
		
	return 0;
}

void task15(void) {
	int nA = 1;
	int nB = ( nA == 1 ? 2 : 0 ); /* сравнява число */
	printf("A value is %d\n", nA); 
	printf("B value is %d\n", nB);
	
	printf("Enter value for nA: ");
	scanf("%d", &nA);
	
	int max = (nA >= nB ? nA : nB);
	
	printf("The maximum of %d and %d is %d.\n", nA, nB, max);
	
	return;
}
