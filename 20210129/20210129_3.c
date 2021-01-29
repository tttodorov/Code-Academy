/* Задача 3. Напишете функция, която връща резултат (а+в)*4. */

#include <stdio.h>

float task3(float a, float b);

int main(void){
	float a = 0, b = 0;
	
	printf("Enter a: ");
	scanf("%f", &a);
	
	printf("Enter b: ");
	scanf("%f", &b);

	printf("Result: %.2f\n", task3(a, b));
	
	return 0;
}

float task3(float a, float b) {
	return (a + b) * 4;
}

