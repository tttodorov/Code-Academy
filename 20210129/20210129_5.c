/* Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не. */

#include <stdio.h>

void task5(void);
char task5_func(int n);

int main(void){
	task5();
	
	return 0;
}

void task5(void) {
	int n = 0;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	printf("%d is %s\n", n, task5_func(n) ? "odd" : "even");
	
	return;
}

char task5_func(int n) {
	return n % 2;
}
