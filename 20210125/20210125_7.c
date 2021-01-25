/* Задача 7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа. */

#include <stdio.h>
#include <stdio_ext.h>

void task7(void);

int main(void){
	task7();
	
	return 0;
}

void task7(void) {
	char c, s[1000];
    int countChars = 0;

    while ((c=getchar()) != EOF) {
        if (c != '\n') {
            s[countChars] = c;
            countChars++;
        } else {
            s[countChars] = '\0';
            if (countChars >= 80) {
                printf("%s\n", s);
            }
            countChars = 0;
        }
    }
	
	return;
}
