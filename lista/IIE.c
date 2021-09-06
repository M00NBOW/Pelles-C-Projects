#include<stdio.h>
void main(void)
{
	unsigned int mascara=0x8000;
	int valor;
	printf("\nDigite um valor:");
	scanf("%d",&valor);
	while(mascara){
		printf("%d",(valor&mascara)?1:0);
		mascara>>=1;
	}
}
