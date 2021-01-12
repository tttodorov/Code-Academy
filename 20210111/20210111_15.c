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

// Returns total number of sequences of bits ('0'-s or '1'-s)
int countBitSequences(int number) { 
    int countSequences = 1, latest = number & 1;
    
    if (number == 0) {
		return countSequences;
	}
	
    while (number > 0) {
		int youngestBit = number & 1;
		
		if (latest != youngestBit) {
			countSequences++;
			latest = youngestBit;
		}
		
		number >>= 1;
	}
    
    return countSequences+1;
}

int main(void) {
	int number1 = 0b00000011, number2 = 0b00000101;

	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	
    int2bin(number1, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number1, buffer);
    
    int countBitSequences1 = countBitSequences(number1);
    printf("number %d has %d bit sequences\n", number1, countBitSequences1);
	
    int2bin(number2, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number2, buffer);
    
    int countBitSequences2 = countBitSequences(number2);
    printf("number %d has %d bit sequences\n", number2, countBitSequences2);
	
	return 0;
}
