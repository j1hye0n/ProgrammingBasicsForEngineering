#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int in,sum,i;
	sum=0;
	
	printf("Enter a number: ");
	scanf("%i",&in);
	
	for(i=1;i<=in;i++){
		sum+=i;
	}
	printf("The result i %i",sum);
	return 0;
}
