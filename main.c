#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
	FILE *fp = NULL;
	char c;
	
	fp = fopen("sample.txt", "r");
	
	if(fp==NULL){
		printf("파일을 못열음\n");
		return;
	}
	
	
	while( (c = fgetc(fp)) != EOF){
		putchar(c);
	}
		
	fclose(fp);
	
	return 0; 
}



