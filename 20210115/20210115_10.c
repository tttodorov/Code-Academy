#include <stdio.h>

void task10(void);

int main(void) {
	task10();
		
	printf("\n");
		
	return 0;
}

const char* c_szText =
	"Here are "
	"instructions for "
	"the program.\n";
	
void task10(void) {
	printf("Help: %s", c_szText);
	
	return;
}
