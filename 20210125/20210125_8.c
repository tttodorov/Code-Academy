/* Задача 8. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът има букви и
цифри. Принтирайте с putchar(). Използвайте условните оператори, за
да премахнете последните шпациите и табулациите в стринга */

#include <stdio.h>

void task8(void);

int main(void){
	task8();
	
	return 0;
}

void task8(void) {
	char c, prev = '\0';
	int countSpaces = 0, countTabs = 0, i;

	while((c = getchar()) != EOF) {
		if (c == ' ') {
			++countSpaces;
			prev = c;
			continue;
		} else if (c == '\t') {
			++countTabs;
			prev = c;
			continue;
		} else if (c == '\n' && (prev == ' ' || prev == '\t')) {
			countSpaces = 0;
			countTabs = 0;
		} else {
			for (i = 0; i < countSpaces; i++) {
				putchar(' ');
			}
			countSpaces = 0;

			for (i = 0; i < countTabs; i++) {
				putchar('\t');
			}
			countTabs = 0;
		}
					
		prev = c;
		putchar(c);
	}
	
	return;
}
