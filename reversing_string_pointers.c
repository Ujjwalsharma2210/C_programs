#include<stdio.h>
#include<string.h>

void revstr(char* str){
	int i, l;
	char *bgnptr, *endptr, ch;

	l=strlen(str);

	bgnptr=str;
	endptr=str;

	for(i=0; i<l-1; i++){
		endptr++;
	}

	for(i=0; i<l/2; i++){
		ch=*endptr;
		*endptr=*bgnptr;
		*bgnptr=ch;

		bgnptr++;
		endptr--;
	}
}

void main(){
	char str[20];
	
	printf("Enter string:\n");
	gets(str);

	revstr(str);

	printf("The reversed string is:\n%s", str);
}