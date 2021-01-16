#include <stdio.h>

void task18(void);

int main(void) {
	task18();
		
	printf("\n");
		
	return 0;
}

void task18(void) {
	printf("\nTask 18:\n");
	
	char payment = 0;
	short days, rez, countCaravans = 3, countCamper = 3;
	double priceCaravan = 90, priceCamper = 100, total = 0;

	printf("Dobre doshli v Karavani Kempeti pod naem\n");
	
	while (countCaravans > 0 && countCamper > 0 && payment == 0) {
		printf("Imame nalichni %d karavani i %d kempera.\n", countCaravans, countCamper);
		
		if (countCaravans > 0) {
			printf("Ako zelaete karavana natisnete 1: ");
			scanf("%hd", &rez);
		
			if (rez == 1) {
				countCaravans--;
				printf("Vie izbrahte karavana\n");
				printf("Za kolko dni 6te rezervirate: ");
				scanf("%hd", &days);
			}
			
			total += days * priceCaravan;
		}
		
		if (countCaravans > 0) {
			printf("Ako zelaete kemper natisnete 2: ");
			scanf("%hd", &rez);
		
			if (rez == 2) {
				countCamper--;
				printf("Vie izbrahte kemper\n");
				printf("Za kolko dni 6te rezervirate: ");
				scanf("%hd", &days);
			}
		
			total += days * priceCamper;
		}
		
		printf("\nSmetkata vi e %.*f lv.", 2, total);
		printf("\nAko zelaeta da preminete kam pla6tane, natisnete 3: ");
		scanf("%hd", &rez);
		
		if (rez == 3) {
			payment++;
		}
	}

	printf("\nTrqbva da zaplatite %.*f lv.\n", 2, total);
	
	return;
}
