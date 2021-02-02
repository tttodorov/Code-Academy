/* Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му */
#include <stdio.h>

void task14(void);
int getLine(char s[], int lim);

int main(void){
	task14();

    return 0;
}

void task14(void) {
	char s[] = "\nthe first row\n\nthe third row\nthe fourth row\nfifth row";
    int lim = 3;

    printf("Length of row number %d is: %d\n", lim, getLine(s, lim));

	return;
}

int getLine(char s[], int lim) {
    int i = -1, countLines = 1, countChars = 0;

    while (s[++i] != '\0')
        if (s[i] == '\n')
            if (countLines == lim) {
                while (s[++i] != '\n' && s[i] != '\0')
                    ++countChars;
                ++countLines;
                return countChars;
            }
            else
                countLines++;

    return -1;
}
