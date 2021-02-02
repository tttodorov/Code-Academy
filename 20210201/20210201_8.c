/* Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */
#include <stdio.h>
#include <string.h>

void task8(void);
void reverse(char s[]);

int main(void){
	task8();

    return 0;
}

void task8(void) {
    char s[] = "reverse";
    printf("%s -> ", s);
    reverse(s);
    printf("%s\n", s);
    
    return;
}

void reverse(char s[]){
    int i, j;
    char temp;

    for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    return;
}
