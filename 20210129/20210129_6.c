/* Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични. */

#include <stdio.h>

#define BUF_SIZE 33

void task6(int n);

char *int2bin(int a, char *buffer, int buf_size);

int main(void){
	task6(n);
	
	return 0;
}

void task6(int n) {
	int n = 0;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
	int2bin(n, buffer, BUF_SIZE - 1);
	printf("%d -> %cb%s\n", n, n >= 0 ? '0' : '1', buffer);
	
	return;
}

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
