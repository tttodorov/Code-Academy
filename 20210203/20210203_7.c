/*Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях?*/
#include <stdio.h>

void task7(void);

int main(void) {
    task7();

    return 0;
}

void task7(void) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    /* It is not required to use '&'.
     * Array arr always points to its first element, e.t. array[0].
     * The array name is "arr" which is a variable. */

    /* This is a pointer to the first array element. */
    int *p = arr;

    /* This is a pointer to the array "arr" as a whole different to "p" */
    int (*ptr)[10] = &arr;

    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);
    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n", sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n", sizeof(ptr), sizeof(*ptr));

    return;
}