/* Упражнение 11*. Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */

/* NOT READY */

#include <stdio.h>
#include <string.h>

void task11(void);
void reverse(char s[]);

int main(void){
	task11();
	
	return 0;
}

void task11(void) {
	char c, s[1000];
	int i = 0;
    
    while ((c=getchar()) != EOF && i < 1000) {
        if (c != '\n') {
            s[i] = c;
            i++;
        } else {
            s[i] = '\0';
            reverse(s);
            printf("%s\n", s);
            i = 0;
        }
    }
    
	reverse(s);
}

void reverse(char s[]) {
	int i, j;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
	
	return;
}
