#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,s;
	
	printf("Input the second : ");
	scanf("%i",&s);
	
	m = s/60;
	s = s%60;
	printf("This time is %d : %d",m,s);
	return 0;
}
