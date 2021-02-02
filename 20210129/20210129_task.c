/* Направете програма за изчисляване на баркод UPC(Universal Product Code)
Производителите на стоки от години поставят баркодове на своите продукти. 
Всеки баркод представлява 12 числа:
Първото число е типа на продукта
Лявата група числа представят производителя,
Дясната група числа представят продукта
Последното число е за проверка.

0 13800 15173 5

Ето алгоритъма за изчисление на проверката за грешка:
Съберете нечетните числа: първото, третото, петото и т.н.
Съберете четните числа: второто, четвъртото и т.н
Умножете първата сума по 3 и добавете втората сума.
Извадете 1 от тотала
Делите тотала по модул на 10.
Изваждате резултата от 9 и трябва да получите последната цифра. */
#include <stdio.h>
#include <stdlib.h>

void task(void);

int main(){
    task();

    return 0;
}

void task() {
    char c;
    char countDigits = 0;
    /* Barcode is required to consist of 12 digits */
    char barCodeLength = 13;
    char barCode[barCodeLength];
    int oddNumbersSum = 0;
    int evenNumbersSum = 0;
    int checkSum = 0;
    
    printf("Write some barcode and press ENTER: ");
    
    while((c = getchar()) != '\n' && countDigits < barCodeLength)
	if (c >= '0' && c <= '9')
	    barCode[countDigits++] = c;
    
    barCode[barCodeLength - 1] = '\0';
    
    countDigits = 0;
    while (countDigits < barCodeLength - 2) {
	oddNumbersSum += (barCode[countDigits] - '0');
    	countDigits += 2;
    }
    
    countDigits = 1;
    while (countDigits < barCodeLength - 2) {
	evenNumbersSum += (barCode[countDigits] - '0');
    	countDigits += 2;
    }
    
    checkSum = abs((9 - oddNumbersSum * 3 + evenNumbersSum - 1) % 10);

    printf("Barcode %s is ", barCode);
    if (checkSum + '0' == barCode[barCodeLength - 2])
         printf("valid\n");
    else
         printf("invalid\n");
    
    return;
}
