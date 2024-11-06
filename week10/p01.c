#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5];
	int i;
	
	a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;
	a[4]=50;
	
	for(i=0;i<5;i++){
		printf("grade[%i] = %i\n",i,a[i]);
	}
	return 0;
}
