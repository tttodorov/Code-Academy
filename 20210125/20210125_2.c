/* Задача 2. Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar() */

#include <stdio.h>

void task2(void);

int main(void){
	task2();
	
	return 0;
}

void task2(void) {	
	char c, nl = 0;
	
	while((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
	}
	
	printf("\nYou entered %d lines\n", nl);
	
	return;
}
