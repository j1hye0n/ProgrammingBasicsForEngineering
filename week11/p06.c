#include <stdio.h>
#include <stdlib.h>

void main(void){
	FILE * fp =NULL;
	char c;
	
	fp =fopen("sample.txt","r");
	if(fp==NULL){
		printf("file is not opened.\n");
	}
	while(fgetc(fp)!=EOF){
		c=fgetc(fp);
		putchar(c);
	}
	fclose(fp);
}

/*void main(void){
	FILE * fp =NULL;
	char c;
	
	fp =fopen("sample.txt","r");
	if(fp==NULL){
		printf("file is not opened.\n");
	}
	while(fgetc(fp)!=EOF){
		c=fgetc(fp);
		putchar(c);
	}
	fclose(fp);
}
*/
