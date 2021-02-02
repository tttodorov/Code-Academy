/* Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */ 
#include <stdio.h>

void task3(void);
double atof(char *s);

int main(void){
    task3();
    
    return 0;
}

void task3() {
	char s1[] = "123.14", s2[] = "-413.21";
    printf("%lf\t%lf\n", atof(s1), atof(s2));
    return;
}

double atof(char *s){
    char flagFraction = 0, flagSign = 0;
    int i = -1;
    double result = 0, power = 1;

	while (s[++i] != '\0') {
		if (s[i] == '-') {
			flagSign = 1;
			continue;
		}
		
		if (s[i] == '.') {
			flagFraction = 1;
			continue;
		}
		
		if (s[i] >= '0' || s[i] <= '9')
			if (flagFraction == 0)
				result = result * 10 + (s[i] - '0');
			else {
				result = result * 10 + (s[i] - '0');
				power *= 10;
			}
	}

    return flagSign == 0 ? result / power : -result / power;
}
