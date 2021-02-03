/* Задача 1 декларирайте три масива с три elementа:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr); */
#include <stdio.h>

void task1(void);

int main(void) {
    task1();

    return 0;
}

void task1(void) {
    char arrChar[4] = {'A', 'B', 'C', '\0'};
    int arrInt[3] = {1, 2, 3};
    double arrDouble[3] = {1.2, 2.4, 3.6};

    printf("Char array: %d Bytes\n", sizeof(arrChar));
    printf("Int array: %d Bytes\n", sizeof(arrInt));
    printf("Double array: %d Bytes\n", sizeof(arrDouble));

    return;
}