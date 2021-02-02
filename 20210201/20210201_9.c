/* Задача 9. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива s[] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва
да разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията
reverse(char s[]); от задача 8, за да обърнем низа. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void task9(void);
void itoa(int n, char s[]);
void reverse(char s[]);

int main(void){
	task9();

    return 0;
}

void task9(void) {
	char countDigits = 0;
    int n1 = 123;
    int n2 = -14234;
    int nValue;
    
    nValue = n1;
    while (nValue != 0) {
        nValue /= 10;
        ++countDigits;
    }
    
    char s1[countDigits];
    
    countDigits = 0;
    nValue = n2;
    while (nValue != 0) {
        nValue /= 10;
        ++countDigits;
    }
    
    char s2[countDigits];
    
    itoa(n1, s1);    
    printf("%d -> string %s\n", n1, s1);

    itoa(n2, s2);
    printf("%d -> string %s\n", n2, s2);

	return;
}

void itoa(int n, char s[]){
    char i = 0, isNegative = 0;

	if (n < 0) {
		isNegative = 1;
		n = abs(n);
	}
	
    do{
        s[i++] = n % 10 + '0';
        n /= 10;
    } while(n > 0);

	if (isNegative)
		s[i] = '-';

    reverse(s);
    
    return;
}

void reverse(char s[]){
    int i, j;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    return;
}
