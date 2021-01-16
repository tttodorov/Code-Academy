#include <stdio.h>

void task5(void);

int main(void) {
	task5();
		
	printf("\n");
		
	return 0;
}

void task5(void) {
	int nX = 1;
	int nY = 1;
	nY = nX + 1; /* ok */
	nX = 1 + nX + nY; /* rvalue error */
	nY = 2 * nX ++ * ( nY = nX * 3 ) + nX ++ + nY --;
	printf("nX = %d, nY = %d\n", nX, nY);

	return;
}
