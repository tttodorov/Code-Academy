#include <stdio.h>

void task15(void);

int main(void) {
	task15();
		
	printf("\n");
		
	return 0;
}

void test15() {
	
	static int s_nValue = 0;
	printf("test() {\n\t%d++;\n}\n", s_nValue++);
}

void task15(void) {
	printf("static int s_nValue = 0\n");
	
	test15();
	test15();
	test15();

	return;
}
