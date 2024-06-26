#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int mock(char input[]){
	srand(time(NULL));
	for(int i=0;i<=strlen(input);i++){
		int chance=rand()%2;
		if(chance==0){
			printf("%c",toupper(input[i]));
		}
		else{
			printf("%c",tolower(input[i]));
		}
	}
	printf("\n");
}
void main(){
	char text[] = "hi how are ya";
	mock(text);
}
