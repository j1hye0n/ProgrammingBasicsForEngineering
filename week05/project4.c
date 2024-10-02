#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;
	
	printf("Input the year : ");
	scanf("%i",&y);
	
	printf("Is the year %d the leap year? %d",y,(y%4==0)&&(y%100!=0));
	return 0;
}
