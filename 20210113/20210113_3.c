#include <stdio.h>

char* char2bin(char c) {
	static char binarr[8];

	for (int i = 0; i <= 7; i++) {
		binarr[7 - i] = (c & (1 << i)) ? '1' : '0';
	}
    
	return binarr;
}												

void task3() {
	signed char char1 = -10;
	unsigned char char2 = 0;
	
	printf("signed char '%c' + unsigned char '%c' = char '%c' == ", char1, char2, char1 + char2);
	printf("binary string '%s' + ", char2bin(char1));
	printf("binary string '%s' = ", char2bin(char2));
	printf("binary string '%s'\n", char2bin(char1 + char2));
	
	return;
}

int main(void) {
	task3();
	
	printf("\n");
		
	return 0;
}
