#include <stdio.h>

void task10(void);

int main(void) {
	task10();
		
	printf("\n");
		
	return 0;
}

void task10(void) {
	int nResult = 13; /* опитайте с други стойности */
	int nX = 4;
	printf("Result = %d\n", nResult);
	nResult += nX;
	printf("Result += %d -> %d\n", nX, nResult);
	nResult = 1;
	nResult <<= nX;
	printf("Result <<= %d -> %d\n", nX, nResult);
	/* използвайте и други оператори за присвояване */
	nResult -= nX;
	printf("Result -= %d -> %d\n", nX, nResult);
	nResult *= nX;
	printf("Result *= %d -> %d\n", nX, nResult);
	nResult /= nX;
	printf("Result /= %d -> %d\n", nX, nResult);
	nResult %= nX;
	printf("Result %%= %d -> %d\n", nX, nResult);
	nResult >>= nX;
	printf("Result >>= %d -> %d\n", nX, nResult);

	return;
}
