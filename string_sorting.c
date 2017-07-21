#include<stdio.h>

int main(){

	char str[10],ch;
	int i,j;

	printf("Enter the string\n");
	scanf("%[^\n]",str);

	for(i=0;i!='\0';i++){
		for(j=i+1;j!='\0';j++){
		if(str[i] > str[i+1]){
			ch = str[i];
			str[i] = str[i+1];
			str[i+1] = ch;
		}	
	}
	}

	str[i] = '\0';
	printf("%c\n", str[i-1]);
	
	printf("string after sorting is %s\n", str);
}
