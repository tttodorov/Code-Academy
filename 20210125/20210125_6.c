/* Задача 6. Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue. */

#include <stdio.h>

void task6(void);

int main(void){
	task6();
	
	return 0;
}

void task6(void) {
	char c;
	int countDigits = 0, countLetters = 0;
	
	while((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			countDigits++;
			continue;
		}
		
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			countLetters++;
		}
	}
	
	printf("\nYou entered %d digits and %d letters\n", countDigits, countLetters);
	
	return;
}
