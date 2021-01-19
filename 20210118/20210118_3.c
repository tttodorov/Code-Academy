#include <stdio.h>

void task3(void);

int main(void) {
	task3();
		
	printf("\n");
		
	return 0;
}

void task3(void) {
	int x = 10;
	int y = 10;
	int true = ++x||y, false;
	
	printf("true = ++x||y = %d, false = %d\n", true, false);
	
	return;
}
