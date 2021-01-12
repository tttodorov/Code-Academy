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

int getPositionOfHightestBit1(int number) {
    if (!number) {
		return 0;
	}        

    int position = 1;

    while (number >>= 1) {
		position++;
	}    

    return --position;
}

int main(void) {
	int number1 = 0b00000011, number2 = 0b00000101;

	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	
    int2bin(number1, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number1, buffer);
    
    int2bin(number2, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number2, buffer);
    
    int position1 = getPositionOfHightestBit1(number1);
    
    printf("number %d eldest bit 1 is on position %d\n", number1, position1);
	
    int position2 = getPositionOfHightestBit1(number2);
    
    int2bin(position2, buffer, BUF_SIZE - 1);
    printf("number %d eldest bit 1 is on position %d\n", number2, position2);
	
	return 0;
}
