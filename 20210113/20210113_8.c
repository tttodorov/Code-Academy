#include <stdio.h>

char* char2bin(char c) {
	static char binarr[8];

	for (int i = 0; i <= 7; i++) {
		binarr[7 - i] = (c & (1 << i)) ? '1' : '0';
	}
    
	return binarr;
}												

void task8() {
	char x = 8;
	printf("x = '%c' = %s\n", x, char2bin(x));

	x = x - 2;
	printf("x = x - 2 = '%c' = %s\n", x, char2bin(x));
	
	x = x + 6;
	printf("x = x + 6 = '%c' = %s\n", x, char2bin(x));

	x = x - 10 + 2;
	printf("x = x - 10 + 2 = '%c' = %s\n", x, char2bin(x));
	
	return;
}

int main(void) {
	task8();
	
	printf("\n");
		
	return 0;
}
