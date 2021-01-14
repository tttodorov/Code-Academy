#include <stdio.h>

void task13() {
	char a;
	int b;
	long c;
	float d;
	double e;

	a = 'a';
	b = 102;
	c = 50000;
	d = 6;
	e = -48.907;

	printf("char a = %c\n", a);
	printf("int b = %d\n", b);
	printf("long c = %ld\n", c);
	printf("float d = %f\n", d);
	printf("double e = %f\n", e);

	return;
}	

int main(void) {
	task13();
	
	printf("\n");
		
	return 0;
}
