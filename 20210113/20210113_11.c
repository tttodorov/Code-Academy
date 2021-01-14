#include <stdio.h>
											
void task11() {
	float fTomatoWeight, fFlourWeight, fYogurtCount, fIceCreamCount, fCandyWeight, fLollipopCount;
	double fTomatoPrice = 4.5, fFlourPrice = 1.8, fYogurtPrice = 0.5, fIceCreamPrice = 0.6, fCandyPrice = 1.5, fLollipopPrice = 0.15;
	
	printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати, брашно, кисело мляко, сладолед на фунийки и близалки.\n");
	printf("Колко килограма домати ще желаете? ");
	scanf("%f", &fTomatoWeight);
	printf("Колко килограма брашно ще желаете? ");
	scanf("%f", &fFlourWeight);
	printf("Колко броя кисело мляко ще желаете? ");
	scanf("%f", &fYogurtCount);
	printf("Колко фунийки сладолед ще желаете? ");
	scanf("%f", &fIceCreamCount);
	printf("Колко килограма бонбони ще желаете? ");
	scanf("%f", &fCandyWeight);
	printf("Колко броя близалки ще желаете? ");
	scanf("%f", &fLollipopCount);

	double fTomatoTotal = fTomatoWeight * fTomatoPrice;
	double fFlourTotal = fFlourWeight * fFlourPrice;
	double fYogurtTotal = fYogurtCount * fYogurtPrice;
	double fIceCreamTotal = fIceCreamCount * fIceCreamPrice;
	double fCandyTotal = fCandyWeight * fCandyPrice;
	double fLollipopTotal = fLollipopCount * fLollipopPrice;

	printf("Вашата сметка е %.*f лв.\n", 2, fTomatoTotal + fFlourTotal + fYogurtTotal + fIceCreamTotal + fCandyTotal + fLollipopTotal);

	return;
}

int main(void) {
	task11();
	
	printf("\n");
		
	return 0;
}
