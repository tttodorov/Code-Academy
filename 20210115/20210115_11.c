#include <stdio.h>

void task11(void);

int main(void) {
	task11();
		
	printf("\n");
		
	return 0;
}

void task11(void) {		
	char str[] = "Hello";
	printf("char str[] = \"%s\"\n", str);

	short begin, end, count = 0;
	
	while (str[count] != '\0')
		count++;

	end = count - 1;
	char rts[end];

	for (begin = 0; begin < count; begin++) {
		rts[begin] = str[end];
		end--;
	}

	rts[begin] = '\0';

	printf("char rts[] = \"%s\"\n", rts);
	
	return;
}
