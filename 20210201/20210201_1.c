/* Задача 1. Напишете функция, която принтира низ, пойнтера към
началото му е подаден като аргумент на функцията void printstr(char *s); Не
забравяйте, низът винаги завършва с знак за терминираща нула '\0', затова
проверката в цикъла, който принтира всеки чаръктър, трябва да е докато не
се стигне този знак. */

#include <stdio.h>

void task1();
void printstr(char *s);

int main(void){
	task1();
	
    return 0;
}

void task1(void) {
    char s[] = "String";
    printstr(s);
    printf("\n");
    return;
}

void printstr(char *s){
    unsigned long long i = 0;
    
    while (s[i] != '\0') {
		printf("%c", s[++i - 1]);
	}
	return;
}
