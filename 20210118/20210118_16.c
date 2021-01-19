#include <stdio.h>

void task16(void);

int main(void) {
	task16();
		
	printf("\n");
		
	return 0;
}

void task16(void) {
	int iA = 13;
	int* pValue = NULL; /* pointer to int */
	pValue = &iA; /* assigning address of iA to the pointer */
	printf("\nAddress of variable iA is: %p\n", pValue);
	printf("\nValue of variable iA is: %d\n", *pValue);
	
	return;
}
