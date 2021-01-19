#include <stdio.h>

void task11(void);

int main(void) {
	task11();
		
	printf("\n");
		
	return 0;
}
	
void task11(void) {
	int iCounter = 0;
	while( ++iCounter < 3 ) {
		printf("Counter %d\n", iCounter);
		printf("++ Counter: %d\n", ++iCounter);
		printf("-- Counter: %d\n", --iCounter);
		printf("Counter ++: %d\n", iCounter++);
		printf("Counter --: %d\n", iCounter--);
	}
	
	/* Какво става, ако се препълни броячът? */
	printf("In this case if iCounter is more than 3 the program stops.");
	printf("\nIf there is no limitation for iCounter, the program will keep" \
			"running printing values of iCounter even when it overclocks the 'int'." \
			"This is extremely dangerous as it can exhaust all the allocated RAM on the computer.\n");
	
	return;
}
