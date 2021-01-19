#include <stdio.h>
#include <unistd.h>

void task18(void);

int main(void) {
	task18();
		
	printf("\n");
		
	return 0;
}

void task18(void) {
	int nValues[] = {1, 2, 4, 8};
	
	int current = 0;
	for (int i = 0; i < sizeof(nValues)/sizeof(int); i++) {
		current = nValues[i];
		printf("%d ", current);
		
		for (int j = 31; j >= 0; j--) {
			printf("%c", ((current & 1) + '0' == '0') ? '_' : '*');
			current >>= 1;
		}
	
		printf("\n");
		sleep(1);
	}
	
	
	return;
}
