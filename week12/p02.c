#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i =300; //300change variable
	
	int *pi=&i;
	char *pc =&i;
	
	printf("%i, %i, %i\n",i,*pi,*pc);
}