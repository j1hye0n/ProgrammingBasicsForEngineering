#include <stdio.h>
#include <stdlib.h>

/*static int sum=1; //static cause error
int main(void) {
	int sum=0;
	
	printf("sum=%d\n",sum);
	
	return 0;
}*/

static int all_files;
extern void sub();

int main(void)
{
	sub();
	printf("%d\n",all_files);
	return 0;
}