#include <stdio.h>

void task12(void);

int main(void) {
	task12();
		
	printf("\n");
		
	return 0;
}

void task12(void) {
	char str[] = "Hello";
	printf("char str[] = \"%s\"\n", str);
	
	short count = 0;
	
	while (str[count] != '\0') {
		if (str[count] == 'l') {
			str[count] = 'x';
		}
		count++;
	}
	
	printf("char str[] = \"%s\"\n", str);
	
	return;
}
