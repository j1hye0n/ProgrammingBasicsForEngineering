#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer(int *in)
{
	printf("Enter the value: ");
	scanf("%i",in);
	return *in;
}

int factorial(int x){
	int res =1;
	int i;
	for(i=1;i<=x;i++){
		res = res*i;
	}
	return res;
}

int combination(int a, int b){
	return factorial(a)/(factorial(a-b)*factorial(b));
}

int main(void) {
	int n,r;
	get_integer(&n);
	get_integer(&r);
	printf("The result of C(%d, %d) is %d.",n,r,combination(n,r));
}
