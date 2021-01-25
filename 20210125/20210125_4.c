/* Задача 4. Напишете програма, която копира входа си на изхода, като
замества всеки низ от една или повече шпации, с една
единствена шпация.
4.1 Добави и за табулации.
4.2 Добави и затваряща скоба. */

#include <stdio.h>

void task4(void);

int main(void){
	task4();
	
	return 0;
}

void task4(void) {
	char c, prev = '\0';
	
	while((c = getchar()) != EOF){
		if ((c != ' ' || (c == ' ' && prev != ' ')) &&
			(c != '\t' || (c == '\t' && prev != '\t'))) {
			putchar(c);
		}
		
		prev = c;
		
		if (c == '(') {
			putchar(')');
			prev = ')';
		}
	}
	
	return;
}
