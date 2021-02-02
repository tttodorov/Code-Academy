/* Задача 5. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(‘?’). Текстът има букви и
цифри. Принтирайте с putchar() само въведените букви. Използвайте
условните оператори, за да принтирате с putchar() само малките
букви от латинската азбука а - z и големите букви A-Z. */

#include <stdio.h>

void task5(void);

int main(void){
	task5();
	
	return 0;
}

void task5(void) {
	char c;
	
	while((c = getchar()) != EOF) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			putchar(c);
		}	
	}
		
	printf("\n");
	
	return;
}