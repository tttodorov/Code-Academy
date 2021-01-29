/* Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
	Main вика Ф1;
	Ф1 вика Ф2;
	Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл. */

#include <stdio.h>

#include "20210129_9.h"

int main(void){
	task9();
	
	return 0;
}

void task9(void) {
	float a = 1;
	
	printf("Enter number: ");
	scanf("%f", &a);
	
	printf("Area of square with side %.2f is %.2f\n", a, areaSquare(a));
	
	printf("Area of cube with side %.2f is %.2f\n", a, areaCube(a));
	
	printf("Volume of cube with side %.2f is %.2f\n", a, volumeCube(a));
}

float areaSquare(float a) {
	return a * a;
}

float areaCube(float a) {
	return 6 * areaSquare(a);
}

float volumeCube(float a) {
	return a * areaCube(a) / 6;
}
