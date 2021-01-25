/* Задача 9. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки. */

#include <stdio.h>

void task9(void);

int main(void){
	task9();
	
	return 0;
}

void task9(void) {
	char c;
	
	while((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z') {
			putchar((c + 32));
		} else {
			putchar(c);
		}
	}
	
	return;
}
