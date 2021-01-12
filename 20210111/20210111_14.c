#include <stdio.h>

// buffer must have length >= sizeof(int) + 1
// Write to the buffer backwards so that the binary representation
// is in the correct order i.e. the LSB is on the far right
// instead of the far left of the printed string
char *int2bin(int a, char *buffer, int buf_size) {
    buffer += (buf_size - 1);

    for (int i = 31; i >= 0; i--) {
        *buffer-- = (a & 1) + '0';

        a >>= 1;
    }

    return buffer;
}

#define BUF_SIZE 33

int flipBitsOnOddPositions(int number) {
    for (int i = 0; i < BUF_SIZE; i++) {
        if (i % 2 == 1) {
			number ^= (1u << i);
		}
    }
    
    return number;
}

int main(void) {
	int number1 = 0b00000011, number2 = 0b00000101;

	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	
    int2bin(number1, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number1, buffer);
    
    int2bin(number2, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number2, buffer);
    
    int newNumber1 = flipBitsOnOddPositions(number1);
    
    int2bin(newNumber1, buffer, BUF_SIZE - 1);
    printf("number %d flip bit on odd positions = %d == %s\n", number1, newNumber1, buffer);
	
    int newNumber2 = flipBitsOnOddPositions(number2);
    
    int2bin(newNumber2, buffer, BUF_SIZE - 1);
    printf("number %d flip bit on odd positions = %d == %s\n", number2, newNumber2, buffer);
	
	return 0;
}
