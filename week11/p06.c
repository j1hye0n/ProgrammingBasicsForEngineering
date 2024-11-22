#include <stdio.h>
#include <stdlib.h>

/*void main(void){
	FILE * fp =NULL;
	char c;
	
	fp =fopen("sample.txt","r");
	if(fp==NULL){
		printf("file is not opened.\n");
	}
	while((c=fgetc(fp))!=EOF){
		putchar(c);
	}
	fclose(fp);
}*/

void main(void){
	FILE * fp =NULL;
	char s[256];
	
	fp =fopen("sample.txt","r");
	if(fp==NULL){
		printf("file is not opened.\n");
	}
	while(fgets(s,sizeof(s),fp)!=NULL){
		puts(s);
	}
	fclose(fp);
}

