/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички elementи на
масивa един по един до неговия край.*/
#include <stdio.h>

void task2(void);

int printArr(int a[], int l);

int main(void) {
    task3();

    return 0;
}

void task2(void) {
    int a[] = {0, 1, 2};
    int l = sizeof(a) / sizeof(a[0]);

    if (printArr(a, l) == 0)
        printf("\nArray is printed \n");
    else
        printf("\nError while printing the array \n");

    return;
}

int printArr(int a[], int l) {
    for (int i = 0; i < l; i++)
        printf("%d ", a[i]);

    return 0;
}