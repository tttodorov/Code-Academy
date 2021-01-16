#include <stdio.h>

void task4(void);

int main(void) {
	task4();
		
	printf("\n");
		
	return 0;
}

void task4(void) {
	int i;
	char arrEscChar[] = { '\t', '\n', '\r', '\v', '\\', '\'', '\"', '\?', '\a', '\b', '\f' };
	
	for (i = 0; i < sizeof(arrEscChar)/sizeof(char); i ++) {
		printf("Escape Character %d '%c'\n", (int) (arrEscChar[i]), arrEscChar[i]);
	}
	
	return;
}
