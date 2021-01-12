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

void presentNumberAsSumOfPowersOf2(int number) {
	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	int i = 0;
	int prints = 0;

    while (number > 0) {
		int powerOf2Value = 1;
		
		if (number % 2 == 1) {
			for (int j = 0; j < i; j++) {
				powerOf2Value *= 2;
			}
			
			if (prints > 0) {
				printf(" +");
			}
			
			printf(" %d", powerOf2Value);
			prints++;
		}
		
		number /= 2;
		i++;
	}
    
    printf("\n");
    
    return;
}

int main(void) {
	int number1 = 0b00000011, number2 = 0b00000101, position = 1;

	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	
    int2bin(number1, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number1, buffer);
    
    int2bin(number2, buffer, BUF_SIZE - 1);
    printf("%d = %s\n", number2, buffer);
    
    printf("%d =", number1);
    presentNumberAsSumOfPowersOf2(number1);
    	
    printf("%d =", number2);
    presentNumberAsSumOfPowersOf2(number2);
	
	return 0;
}
