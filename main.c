#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
	FILE *fp;
	char str[30];
	
	fp = fopen("sample.txt", "w");
	
	printf("input a word : ");
	scanf("%s", str); 
	fprintf(fp, "%s\n", str);
	
	printf("input a word : ");
	scanf("%s", str); 
	fprintf(fp, "%s\n", str);
	
	printf("input a word : ");
	scanf("%s", str); 
	fprintf(fp, "%s\n", str);	
	
	fclose(fp);
}



