#include<stdio.h>
#include<string.h>

void main(){
	int i, j;
	char a[20], b[20];

	printf("Enter string: ");
	gets(a);

	for(i=0; i<strlen(a); i++){
		for(j=0; j<strlen(a); j++){
			a[i]=b[j];
		}
	}
		printf("%s\n", b);
}