/* Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30. */
#include <stdio.h>

void task6(void);
unsigned long long factorial(int begin, int end);

int main(void) {
    task6();

    return 0;
}

void task6(void) {
    printf("Result is: %lld\n", factorial(1, 30));
}

unsigned long long factorial(int begin, int end) {
    unsigned long long product = 1;

	if (begin <= end)
		while (begin++ <= end)
			product *= begin - 1;
	else
		while (end++ <= begin)
			product *= end - 1;

    return product;
}
