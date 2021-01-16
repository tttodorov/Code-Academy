#include <stdio.h>

void task14(void);

int main(void) {
	task14();
		
	printf("\n");
		
	return 0;
}

extern int g_nValue;

void test() {
	printf("test() {\n\t%d++;\n}\n", g_nValue);
}

int g_nValue = 0;

void task14(void) {
	printf("extern int g_nValue = %d\n", g_nValue);
	
	test();
	test();
	test();
	
	printf("extern int g_nValue = %d\n", g_nValue);
	
	return;
}
