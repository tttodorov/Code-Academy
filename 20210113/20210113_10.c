#include <stdio.h>

void task10() {
	short days, rez, countCaravans = 3, countCamper = 3;
	double priceCaravan = 90, priceCamper = 100;

	printf("Dobre doshli v Karavani Kempeti pod naem\n");
	printf("Ako zelaete karavana natisnete 1\n");
	printf("Ako zelaete kemper natisnete 2\n");

	scanf("%hd", &rez);
	if (rez == 1) {
		printf("Vie izbrahte karavana\n");
	} else {
		printf("Vie izbrahte kemper\n");
	}
	
	printf("Za kolko dni 6te rezervirate?\n");
	scanf("%hd", &days);

	if (rez == 1) {
		printf("Trqbva da zaplatite %.*f lv. Imame nalichni o6te 2 karavani i 3 kempera.\n", 2, days * priceCaravan);
	} else {
		printf("Trqbva da zaplatite %.*f lv. Imame nalichni o6te 3 karavani i 2 kempera.\n", 2, days * priceCamper);
	}

	return;
}

int main(void) {
	task10();
	
	printf("\n");
		
	return 0;
}
