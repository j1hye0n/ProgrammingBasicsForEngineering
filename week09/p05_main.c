#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*static*/ int all_files; //static declare can cause error - [Error] ld returned 1 exit status

extern void sub();

int main(void) {
	sub();
	printf("%d\n",all_files);
	return 0;
}
