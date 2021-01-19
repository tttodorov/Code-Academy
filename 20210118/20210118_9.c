#include <stdio.h>

void task9(void);

int main(void) {
	task9();
		
	printf("\n");
		
	return 0;
}

void task9(void) {
	int iX = 13;
	int iY = 44;
	int iResult = 0;
	iResult = iX - iY;
	printf("%d - %d = %d \n", iX, iY, iResult);
	iResult = iY / iX;
	printf("%d / %d = %d \n", iY, iX, iResult);
	iResult = iY % iX;
	printf("%d / %d Remainder: %d\n", iY, iX, iResult);
	/* homework: examples for '*' и '+', float - използвайте вместо int */
	iResult = iX * iY;
	printf("%d * %d = %d \n", iX, iY, iResult);
	iResult = iY + iX;
	printf("%d + %d = %d \n", iY, iX, iResult);
	float fResult = 0;
	fResult = iX - iY;
	printf("%d - %d = %.*f \n", iX, iY, 2, fResult);
	fResult = iY / iX;
	printf("%d / %d = %.*f \n", iY, iX, 2, fResult);
	fResult = iY % iX;
	printf("%d / %d Remainder: %.*f\n", iY, iX, 2, fResult);
	fResult = iY * iX;
	printf("%d * %d = %.*f \n", iX, iY, 2, fResult);
	fResult = iY + iX;
	printf("%d + %d = %.*f \n", iY, iX, 2, fResult);
	
	return;
}
