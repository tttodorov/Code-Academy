/* Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob(n, s[], 16) представя числото n като шеснадесетично число в
стринга s[]. */
#include <stdio.h>
#include <string.h>

void task10(void);
void itob(int n, char s[], int b);

int main(void){
    task10();
    
    return 0;
}

void task10(void) {
	int n = 0, b = 2;
	
    printf("Enter a whole number: ");
    scanf("%d", &n);

    while(n < 0){
        printf("\nEnter a number that is positive (greater than 0): ");
        scanf("%d", &n);
    }

    char s[n];

    printf("Enter a base: ");
    scanf("%d", &b);

    while (b < 2 || b > 36) {
		printf("\nEnter a valid base for conversion (between 2 and 36): ");
		scanf("%d", &b);
	}

    itob(n, s, b);

	return;
}

void itob(int n, char s[], int b){
    
    int count = 0;
	
	printf("%d (10) -> ", n);
	
	do {
		if (n % b > 9)
			s[count] = 55 + (n % b);
		else
			s[count] = '0' + n % b;
		
		count++;
		n /= b;
	} while (n > 0);
	
	while (count-- > 0)
		printf("%c", s[count]);
		
	printf(" (%d)\n", b);
		
	return;
}
