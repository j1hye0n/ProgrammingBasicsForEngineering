#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int in;
	int i=0;
	int answer =50;
	
	do{
		printf("Guess a number: ");
		scanf("%i",&in);
		
		if (in<answer){
			printf("Low!\n");
			i+=1;
		}
		else if(in>answer){
			printf("High!\n");
			i+=1;
		}
		else{
			printf("Gongratulation! Trials: %i",i);
			break;
		}
	}
	while(in!=answer);
	return 0;
}
