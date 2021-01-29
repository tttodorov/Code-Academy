/* Задача 7. Напишете програма на С, която съдържа 2 функции.
1. Първата смята лице на правоъгълен триъгълник.
2. Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията. */

#include <stdio.h>

void task7(void);

float areaRectangularTriangle(float a, float b);

float areaRectangle(float areaRectangularTriangle);

int main(void){
	task7();
	
	return 0;
}

void task7(void) {
	float a = 1, b = 1;
	
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	
	printf("Area of rectangular triangle with legs %.2f and %.2f is %.2f\n", a, b, areaRectangularTriangle(a, b));
	
	printf("Area of rectangle with sides %.2f and %.2f is %.2f\n", a, b, areaRectangle(areaRectangularTriangle(a, b)));

	return;
}

float areaRectangularTriangle(float a, float b) {
	return a * b / 2;
}

float areaRectangle(float areaRectangularTriangle) {
	return areaRectangularTriangle * 2;
}
