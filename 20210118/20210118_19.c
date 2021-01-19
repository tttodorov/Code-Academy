#include <stdio.h>

void task19(void);

int main(void) {
	task19();
		
	printf("\n");
		
	return 0;
}

void task19(void) {
	int A = 0, B = 0;
	printf("! ( %d && %d ) == ! %d || ! %d -> %s\n", A, B, A, B, (! ( A && B )) == (! A || ! B) ? "true" : "false");
	printf("! ( %d || %d ) == ! %d && ! %d -> %s\n", A, B, A, B, (! ( A || B )) == (! A && ! B) ? "true" : "false");
	
	A = 1, B = 0;
	printf("\n! ( %d && %d ) == ! %d || ! %d -> %s\n", A, B, A, B, (! ( A && B )) == (! A || ! B) ? "true" : "false");
	printf("! ( %d || %d ) == ! %d && ! %d -> %s\n", A, B, A, B, (! ( A || B )) == (! A && ! B) ? "true" : "false");
	
	A = 0, B = 1;
	printf("\n! ( %d && %d ) == ! %d || ! %d -> %s\n", A, B, A, B, (! ( A && B )) == (! A || ! B) ? "true" : "false");
	printf("! ( %d || %d ) == ! %d && ! %d -> %s\n", A, B, A, B, (! ( A || B )) == (! A && ! B) ? "true" : "false");
	
	A = 1, B = 1;
	printf("\n! ( %d && %d ) == ! %d || ! %d -> %s\n", A, B, A, B, (! ( A && B )) == (! A || ! B) ? "true" : "false");
	printf("! ( %d || %d ) == ! %d && ! %d -> %s\n", A, B, A, B, (! ( A || B )) == (! A && ! B) ? "true" : "false");
	
	return;
}
