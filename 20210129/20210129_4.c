/* Задача 4. Напишете функция, която връща резултат a*2 + b*c. */

#include <stdio.h>

float task4(float a, float b, float c);

int main(void){
	float a = 0, b = 0, c = 0;
	
	printf("Enter a: ");
	scanf("%f", &a);
	
	printf("Enter b: ");
	scanf("%f", &b);
	
	printf("Enter c: ");
	scanf("%f", &c);

	printf("Result: %.2f\n", task4(a, b, c));
	
	return 0;
}

float task4(float a, float b, float c) {
	return a * 2 + b * c;
}
