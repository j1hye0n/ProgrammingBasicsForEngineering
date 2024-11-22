#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[100],b[100],c[100];
	
	printf("input a word :");
	scanf("%s",&a);
	printf("input a word :");
	scanf("%s",&b);
	printf("input a word :");
	scanf("%s",&c);
	
	FILE *sample=NULL;
	sample = fopen("sample.txt","w");
	
	if(sample==NULL){
		printf("file is not opened.\n");
		return;}
	else{
		fprintf(sample,"%s\n",a);
		fprintf(sample,"%s\n",b);
		fprintf(sample,"%s\n",c);
		fclose(sample);}
	
	return 0;
}
