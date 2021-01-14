#include <stdio.h>

void task12() {
	int i, j;

	printf("\n");

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 12; j++) {
			if (j > i && j < 12 - i) {				
				printf("# ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	printf("           (a)\n\n");

	for (i = 5; i >= 0; i--) {
		for (j = 0; j < 12; j++) {
			if (j > i && j < 12 - i) {				
				printf("# ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	printf("           (b)\n\n");

	for (i = 4; i >= 0; i--) {
		printf(" ");
		for (j = 0; j < 10; j++) {
			if (j > i && j < 10 - i) {				
				printf(" #");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}	
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 12; j++) {
			if (j > i && j < 12 - i) {				
				printf("# ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	printf("           (c)\n");

	return;
}

int main(void) {
	task12();
	
	printf("\n");
		
	return 0;
}
