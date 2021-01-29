/* Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата. */
 
#include <stdio.h>

void task1(void);

const float CONST_PI = 3.14;

float circleArea(float r);

int main(void){
	task1();
	
	return 0;
}

void task1(void) {
	printf("Area: %.2f\n", circleArea(10));
	
	return;
}

float circleArea(float r) {
	return CONST_PI * r * r;
}
