/* Задача 11. напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */
#include <stdio.h>
#include <string.h>

void task11(void);
void squeeze(char s[], int c);

int main(void){
    task11();
    
    return 0;
}

void task11(void) {
	char s[] = "string";
    char c = 'i';

    squeeze(s, c);
	
	return;
}

void squeeze(char s[], int c) {
    int i = 0, j = 0, len = strlen(s);

	while (j < len)
		if (s[j] == c)
			j++;
		else
			s[i++] = s[j++];
	
	while (i < len)
		s[i++] = '\0';
	  
    printf("%s\n", s);
    
    return;
}
