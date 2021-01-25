/* Задача 1. Пребройте символите, подавани на конзолата, с функцията getchar(); */

#include <stdio.h>

void task1(void);

int main(void){
	task1();
	
	return 0;
}

void task1(void) {	
	char c;
	c = getchar();
	int count = 0;
	
	while(c != EOF){
		c = getchar();
		count++;
	}
	
	printf("\nYou entered %d symbols\n", count);
	
	return;
}
