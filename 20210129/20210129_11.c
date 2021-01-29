/* Задача 11*. Напишете програма, която да премахва всички
коментари в една С програма. */

#include <stdio.h>

#include "20210129_11.h"

void task11(void);

int main() {
	task11();
	
	return 0;
}

void task11() {
	int c, d;
	printf("Enter a string to remove comments \n");

	while ((c=getchar()) != EOF) {
		removeComment(c);
	}
	
	return;
}

void removeComment(int c){
	int d;

	if ( c == '/') {
		if ((d=getchar())=='*') {
			interruptComment();
		} else {
			putchar(c);
			putchar(d);
		}
	} else {
		putchar(c);
	}
}

void interruptComment() {
	int c,d;
     
	c = getchar();
	d = getchar();

	while(c != '*' || d != '/') {
		c = d;
		d = getchar();
	}
}
