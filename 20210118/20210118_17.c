#include <stdio.h>

void task17(void);

int main(void) {
	task17();
		
	printf("\n");
		
	return 0;
}

void task17(void) {
	int A = 1; // акумулатор с начална стойност

	printf("int A = %d\n", A);
	A ^= A << 13;
	printf("int A = %d\n", A);
	A ^= A >> 17;
	printf("int A = %d\n", A);
	A ^= A << 5;
	printf("int A = %d\n", A);
	
	// Направете вариация с акумулатор long long int
	long long int B = 1;
	printf("long long int B = %lld\n", B);
	B ^= B << 13;
	printf("long long int B = %lld\n", B);
	B ^= B >> 17;
	printf("long long int B = %lld\n", B);
	B ^= B << 5;
	printf("long long int B = %lld\n", B);
	
	return;
}
