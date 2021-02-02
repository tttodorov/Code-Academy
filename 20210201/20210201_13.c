/* Задача 13. напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */
#include <stdio.h>
#include <string.h>

void task13(void);
void lower(char s[]);

int main(void){
	task13();

    return 0;
}

void task13(void) {
    char s[] = "cODEaCADEMY";
    
    printf("%s -> ", s);
    
    lower(s);

	return;
}

void lower(char s[]){
    int i = 0;

    for (i; i < strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

    printf("%s\n", s);

	return;
}
