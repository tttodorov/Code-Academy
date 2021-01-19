#include <stdio.h>

int isLetter(char c);

int main(void) {
	printf("Task 8:\n");
	
	char c = 'c';
	
	printf("Is char c = '%c' letter: %s\n", c, isLetter(c) ? "true" : "false");
		
	return 0;
}

int isLetter(char c) {
	if(c < 128) {
		return 1;
	}
	
	return 0;
}
