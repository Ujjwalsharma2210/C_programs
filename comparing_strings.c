#include<stdio.h>
#include<string.h>

int comp(char*, char*);

void main(){
	char a[20], b[20], res;

	printf("Enter first string:\n");
	gets(a);

	printf("Enter second string:\n");
	gets(b);

	res = comp(a, b);

	if(res == 0)
		printf("The string are same.\n");

	else
		printf("The strings are not equal.");
}

int comp(char *a, char *b){
	while(*a==*b){
		if(*a=='\0' || *b=='\0')
			break;

		a++;
		b++;
	}
	if(*a=='\0' && *b=='\0')
		return 0;
	else
		return 1;
}