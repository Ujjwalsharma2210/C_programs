#include<stdio.h>
#include<string.h>

void tog(char *str);

void main(){
	char str[30];

	printf("Enter string:\n");
	gets(str);

	tog(str);

	printf("The toggled string is:\n%s\n", str);
}

void tog(char *str){
	int i;
	while(str[i]!='\0'){
		if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
		else if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;

		i++;
	}
}