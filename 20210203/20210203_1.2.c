/* Задача 1.2 принтирайте последния element от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double */
#include <stdio.h>

void task1_2(void);

int main(void) {
    task1_2();

    return 0;
}

void task1_2(void) {
    char arrChar[4] = {'A', 'B', 'C', '\0'};
    int arrInt[3] = {1, 2, 3};
    double arrDouble[3] = {1.2, 2.4, 3.6};

    printf("Char array last element: %c\n", arrChar[2]);
    printf("Int array last element: %d Bytes\n", arrInt[2]);
    printf("Double array last element: %d Bytes\n", arrDouble[2]);

    return;
}