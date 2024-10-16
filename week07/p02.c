#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b){
	return a+b;	
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if (x>y){
		return x;
	}
	else if (x<y){
		return y;
	}
	else {
		printf("none");
	}
}

int main(int argc, char *argv[]) {
	int in1,in2;
	
	printf("Enter the integers: ");
	scanf("%i %i",&in1,&in2);
	printf("Result - Sum:%d, Square: %d, Max: %d ",sumTwo(in1, in2),square(in1),get_max(in1,in2));
}
