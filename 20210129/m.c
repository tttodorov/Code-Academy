/* Задача 8. Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main(). Компилирайте програмата по показания 
по-горе начин. */

#include <stdio.h>
#include "f.h"

int main(void){
	int a = 1, b = 1;
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	printf("Enter b: ");
	scanf("%d", &b);
	
	printf("Add %d and %d is %d\n", a, b, add(a, b));
	
	printf("Incremented %d is %d\n", add(a, b), incr(add(a, b)));
	
	return 0;
}
