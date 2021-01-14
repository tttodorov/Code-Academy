#include <stdio.h>

void task1() {
	char char1 = 255, char2 = 10;
	
	printf("'%c' + '%c' = '%c'\n", char1, char2, char1 + char2);
	
	return;
}

int main(void) {
	task1();
	
	printf("\n");
		
	return 0;
}
