#include <stdio.h>

void task9(void);

int main(void) {
	task9();
		
	printf("\n");
		
	return 0;
}

void task9(void) {	
	char s[] = "Hi";
	short i = 0;
	short s_length;
	
	printf("\"");
	while (s[i++] != '\0') {
		printf("%c", s[i - 1]);
	}
	s_length = i - 1;
	
	printf("\" length = %d\n", s_length);
	
	return;
}
