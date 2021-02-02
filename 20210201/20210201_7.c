/* Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна. */
#include <stdio.h>

void task7(void);
unsigned long long factorial(int begin, int end);

int main(void) {
    task7();

    return 0;
}

void task7(void) {
    printf("Result is: %lld\n", factorial(1, 30));
}

unsigned long long factorial(int begin, int end) {
    if (end > begin)
        return end * factorial(begin, end - 1);
    else if (begin > end)
        return begin * factorial(begin, end - 1);
    else
		return begin;
}
