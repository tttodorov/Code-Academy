#include <stdio.h>

void task3(void);

int main(void) {
	task3();
		
	printf("\n");
		
	return 0;
}

void task3(void) {
	printf("Character literals: '%c', '%c', '%c' \n", '\041', '\x3A', 'Z');
	printf("Integer literals: %d, %d, %lld \n", 123, 0xFFF, 123456789012345ULL);
	printf("Floating-point literals: %1f, %1f, %1g, %1g \n", 1.23, 1234.5678, 123E-12, 123E+28);
	printf("String literals: \"%s\", \"%s\", \"%s\"\n", "xxx", "yyy", "zzz");
	
	return;
}
