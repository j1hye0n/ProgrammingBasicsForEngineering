#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int grade[5];
	
	for(i=0; i<5;i++)
	{
		printf("Input value - grade[%i] = ",i);
		scanf("%d", &grade[i]);
	}
	int *j; //pointer variable
	int sum;
	for(i=0;i<5;i++)
	{
		j=&grade[i];
		printf("grade[%i] = %d\n",i,*j);
		sum += *j;
	}
	printf("average: %d", sum/5);
	return 0;
}
