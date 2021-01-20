#include <stdio.h>

int main(void){
	int m = 0;
	
	while(m != 4){
		printf("\n Press 1 to see message Hello\n Press 2 to see Poem\n Press 3 to see hidden message\n Press 4 for exit\n");		
		scanf("%d", &m);
		
		switch(m){
			case 1:
				printf("hello world\n");
				break;
			case 2:
				printf("Mary had a little lamb,\nIts fleece was white as snow;\nAnd everywhere that Mary went\nThe lamb was sure to go.\n");
				break;
			case 3:
				printf("48\n");
				break;	
			default :
				printf("Press 1, 2, 3 or 4\n");
				break;
		}
	}
	
	return 0;
}
