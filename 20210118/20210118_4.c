#include <stdio.h>

void task4(void);

int main(void) {
	task4();
		
	printf("\n");
		
	return 0;
}

void task4(void) {
	int x = 10, y = 10;
	
	printf("true = x&&y&x<<1 = %d\n", x&&y&x<<1);
	printf("true = x&&y^x<<1 = %d\n", x&&y^x<<1);
	
	return;
}
