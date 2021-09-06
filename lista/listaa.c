#include <stdio.h>
#define para_maiusculo(ch)((ch)>=(97)?(ch-32):(ch))
int main (void)
{
	char ch;
	printf("digite uma letra: ");
	scanf("%c",&ch);
	printf("%c\n",para_maiusculo(ch));
	return 0;
}
