#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char a,b;
	int c,d;
	
	printf("enter a character : ");
	scanf("%c",&a); 
	
	b=a+1;
	c=a;
	d=b;
	printf("the next character of %c (%i) is %c (%i)",a,c,b,d );
	
	return 0;
}


