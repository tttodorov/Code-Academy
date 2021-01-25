/* Упражнение 10. Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред. */

#include <stdio.h>

void task10(void);
void reverse(char *s);
int string_length(char *pointer);

int main(void){
	task10();
	
	return 0;
}

void task10(void) {
	char c, s[1000];
    int i = 0;
    
    while ((c=getchar())!= EOF && i < 1000)
        if(c != '\n') {
            s[i] = c;
            i++;
        } else {
            s[i] = '\0';
            reverse(s);
            i = 0;
        }
        
	return;
}

void reverse(char *s) {
	int end = string_length(s) - 1;

    for (end; end >= 0; end--)
        printf("%c", s[end]);
        
	printf("\n");
}
 
int string_length(char *pointer) {
   int c = 0;
 
   while(*(pointer + c) != '\0')
      c++;
 
   return c;
}
