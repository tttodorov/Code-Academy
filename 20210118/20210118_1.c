#include <stdio.h>

void task1(void);

int main(void) {
	task1();
		
	printf("\n");
		
	return 0;
}

void task1(void) {
	int x = 10, y = 10;
	int true = x == y, false = x != y;
	
	printf("true = x == y -> %d, false = x != y -> %d\n", true, false);
	
	return;
}
