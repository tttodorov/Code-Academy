#include <stdio.h>

void task13(void);

int main(void) {
	task13();
		
	printf("\n");
		
	return 0;
}

void task13(void) {	
	char str[] = "HELLO";
	printf("char str[] = \"%s\"\n", str);
	
	short count = 0;
	
	while (str[count] != '\0') {
		str[count] = str[count] + 32;
		count++;
	}
	
	printf("char str[] = \"%s\"\n", str);
	
	return;
}
