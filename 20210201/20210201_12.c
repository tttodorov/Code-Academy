/* Задача 12. напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция) */
#include <stdio.h>

void task12(void);
int any(char s1[], char s2[]);

int main(void){
	task12();

    return 0;
}

void task12(void) {
    char s1[] = "random text here";
    char s2[] = "test";

    printf("First occurrence of character from \"%s\" in \"%s\" is at position %d\n", s2, s1, any(s1, s2));

	return;
}

int any(char s1[], char s2[]){
    int i, j;
    
    for (i = 0; s1[i] != '\0'; i++){
        for(j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]) {
				printf("Common character is: %c\n", s1[i]);
				return i;
            }  
        }
    }

    return -1;
}
