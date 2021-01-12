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

int setBitsTo0FromPosition(int number, int position) {
    int count = 1, i = 0;
    
    while (i++ <= position) {
		count *= 2;
	}
    
    return number & (--count >> 1);
}

int main(void) {
	int number1 = 0b00000011, number2 = 0b00000101, position = 2;

	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	
    int2bin(number1, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number1, buffer);
    
    int2bin(number2, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number2, buffer);
    
    int newNumber1 = setBitsTo0FromPosition(number1, position);
    
    int2bin(newNumber1, buffer, BUF_SIZE - 1);
    printf("number %d set bit to 0 from position %d = %d == %s\n", number1, position, newNumber1, buffer);
	
    int newNumber2 = setBitsTo0FromPosition(number2, position);
    
    int2bin(newNumber2, buffer, BUF_SIZE - 1);
    printf("number %d set bit to 0 from position %d = %d == %s\n", number2, position, newNumber2, buffer);
	
	return 0;
}
