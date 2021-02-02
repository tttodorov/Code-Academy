#include <stdio.h>

int main(void) {
	int start, end;
	
	printf("Task: Calculate sum of whole numbers in sector\n");
	printf("Enter integer for start sector: ");
	scanf("%d", &start);
	printf("Enter integer for end sector: ");
	scanf("%d", &end);
	
	if (start >= end) {
		printf("\nError: Entered end has to be greater than start!\n");
		return -1;
	}
	
	printf("Result: Sum of whole numbers in sector [%d, %d] -> ", start, end);
	
	do {
		start += start + 1;
	} while (start < end);

	printf("%d\n", start);

	return 0;
}
