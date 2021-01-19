#include <stdio.h>

void task2(void);

int main(void) {
	task2();
		
	printf("\n");
		
	return 0;
}

void task2(void) {
	int x = 10;
	int y = 10;
	int z = 30;
	int true = x==y+(z<y)!=20;
	
	printf("true = x==y+(z<y)!=20 -> %d\n", true);
	
	return;
}
