#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("enter two integers: ");
	scanf("%6f,%6f",&a,&b);
	printf("%6f / %6f = %6f",a,b,a/b);
	return 0;
}
