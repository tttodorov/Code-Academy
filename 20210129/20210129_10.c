/* Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
	a. Трябва да може да приеме като параметър float и да върне float.
	b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
	a. Проверете дали резултатът е отрицателно число и върнете -1.
	b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него. */

#include <stdio.h>
#include <math.h>

#include "20210129_10.h"

int main(void){
	unsigned u1 = 1, u2 = 1;
	float f3 = 0, f4;
	
	printf("Enter 2 positive integers: ");
	scanf("%u %u", &u1, &u2);
	
	printf("Least Common Multiple of %u and %u is %u\n", u1, u2, lcm(u1, u2));
	
	printf("Enter a number: ");
	scanf("%f", &f3);
	
	printf("Absolute value of %.2f is %.2f\n", f3, absoluteValue(f3));
	
	printf("Absolute value of %d is %d\n", (int) f3, (int) absoluteValue((int) f3));
	
	if (squareRoot(f3) == -1){
        printf("Number %.2f is negative. Using the second function, absolute value of %.2f is %.2f.", f3, f3, absoluteValue(f3));
    	printf("Square root of %.2f is %.2f\n", f3, squareRoot(absoluteValue(f3)));
	} else {
		printf("Square root of %.2f is %.2f\n", f3, squareRoot(f3));
	}
	
	return 0;
}

unsigned lcm(unsigned u1, unsigned u2) {
	unsigned u, gcd;
    
    for (u = 1; u <= u1 && u <= u2; ++u) {        
        if (u1 % u == 0 && u2 % u == 0)
            gcd = u;
    }

    return (u1 * u2) / gcd;
}

float absoluteValue(float n) {
	if (n >= 0)
		return n;

	return -n;
}

float squareRoot(float n) {
	if (n < 0)
		return -1;
	
	return sqrt(n);
}
