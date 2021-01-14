#include <stdio.h>

char* char2bin(char c) {
	static char binarr[8];

	for (int i = 0; i <= 7; i++) {
		binarr[7 - i] = (c & (1 << i)) ? '1' : '0';
	}
    
	return binarr;
}												

void task2() {	
	char char1 = 255, char2 = 10;
	
	printf("char '%c' = binary string '%s'\n", char1, char2bin(char1));
	printf("char '%c' = binary string '%s'\n", char2, char2bin(char2));
	
	return;
}

int main(void) {
	task2();
	
	printf("\n");
		
	return 0;
}
