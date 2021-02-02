#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	unsigned nTick = 0;
	
	for (;;) {
		sleep(1);
		printf("tick %d\n", ++nTick);
		nTick %= 60;
	
		if(nTick == 48)
			break;
	}
	
	return 0;
}
