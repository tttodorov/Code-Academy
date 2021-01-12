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

int setBitTo0OnBetweenPositions(int number, int startPosition, int endPosition) {
    for (int i = BUF_SIZE; i >= 0; i--) {
        if (i >= startPosition && i <= endPosition) {
			number &= ~(1u << i);
		}
    }
    
    return number;
}

int main(void) {
	int number1 = 0b00001111, number2 = 0b00111101, position1 = 3, position2 = 7;

	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	
    int2bin(number1, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number1, buffer);
    
    int newNumber1 = setBitTo0OnBetweenPositions(number1, position1, position2);
    
    int2bin(newNumber1, buffer, BUF_SIZE - 1);
    printf("number %d set bit to 0 on positions from %d to %d = %d == %s\n", number1, position1, position2, newNumber1, buffer);
	
    int2bin(number2, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number2, buffer);
    
    int newNumber2 = setBitTo0OnBetweenPositions(number2, 2, 7);
    
    int2bin(newNumber2, buffer, BUF_SIZE - 1);
    printf("number %d set bit to 0 on positions from %d to %d = %d == %s\n", number2, position1, position2, newNumber2, buffer);
	
	return 0;
}
