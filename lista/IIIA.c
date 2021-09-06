#include<stdio.h>
int main(void)
{
	char ch;
	int c=0;
	printf("escreva um caractere: ");
	scanf("%c",&ch);
	while(ch!='ESC'){
		int x='ch';
		if (65<=x<=90){
			printf("maiusculo");
		}
			else {
				printf("minusculo");
			}

		
		
	}
	printf("%d",c);
	return 0;
	
}
