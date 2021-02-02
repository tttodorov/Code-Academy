/* Задача 5. Рекурсивна функция */
#include <stdio.h>

void task5(void);
int RecursiveFun(int nA, int nB);

int main() {
	task5();
	
	return 0;
}

void task5(void) {
	printf("RecursiveFun: %d\n", RecursiveFun(5, 7));
	return;
}

int RecursiveFun(int nA, int nB) {
	int nValue = 1;
	if (nA > 1 && nB > 1) {
		nValue += RecursiveFun(nA - 1, nB - 1);
	} /* сумира числата, докато и двете са по-големи от 1 */
	return (nA + nB + nValue);
}
