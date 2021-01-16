#include <stdio.h>

void task1(void);

int main(void) {
	task1();
		
	printf("\n");
		
	return 0;
}

extern int g_nValue; /* global variable declaration */

void task1(void) {
	printf("Global variable = %d \n", g_nValue);
	
	return;
}

int g_nValue = 321; /* global variable definition */
