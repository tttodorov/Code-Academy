/* Задача 3. Напишете програма, която преброява шпациите, табулациите и новите редове. */

#include <stdio.h>

void task3(void);

int main(void){
	task3();
	
	return 0;
}

void task3(void) {	
	char c;
	int countSpaces = 0, countTabs = 0, countLines = 0;
	
	while((c = getchar()) != EOF){
		if (c == '\n') {
			countLines++;
		} else if (c == '\t') {
			countTabs++;
		} else if (c == ' ') {
			countSpaces++;
		}
	}
	
	printf("\nYou entered %d spaces, %d tabs and %d new lines\n", countSpaces, countTabs, countLines);
	
	return;
}
