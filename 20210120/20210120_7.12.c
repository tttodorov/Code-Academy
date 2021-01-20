#include <stdio.h>

int main () {
	char szBuf[10] = "za";
	
	printf("\nCodes %s -> ", szBuf);
	scanf("%c %c %c %c %c %c %c %c %c", &szBuf[0], &szBuf[2], &szBuf[3], &szBuf[4], &szBuf[5], &szBuf[6], &szBuf[7], &szBuf[8], &szBuf[9]);
	
	switch(szBuf[0]) {
		case 'x' :
			printf("No\n" );
			break;
		case 'y' :
		case 'z' :
			switch(szBuf[1]) {
				case 'a': 
					printf(" Yes, "); break;
				case 'x':
					printf(" No, "); break;
				default:
					break;
			}
			printf("Maybe\n" );
			break;
		case 'a' :
			printf("Yes\n" );
			break;
		default :
			printf("Unknown\n" );
			break;
	}
	
	return 0;
}
