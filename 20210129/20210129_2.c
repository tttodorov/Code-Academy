/* Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
	printf("Enter a radius\n");
	scanf("%lf", &r);
Използвайте горната функция 1. за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */

#include <stdio.h>

void task2(void);

const float CONST_PI = 3.14;

float circleArea(float r);

int main(void){
	task2();
	
	return 0;
}

void task2(void) {
	float r = 0;
	
	printf("Enter a radius\n");
	scanf("%f", &r);
	
	printf("Area: %.2f\n", circleArea(r));
	
	return;
}

float circleArea(float r) {
	return CONST_PI * r * r;
}
