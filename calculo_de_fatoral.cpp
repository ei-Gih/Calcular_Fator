#include<math.h>
#include<stdio.h>
int main(void)
{
	int N=0;
	int j=1;
	int fat=1;
	char resposta='n';
	printf("\nCalcuo do fatorial de um numero.\n\n");
	do{
		printf("\n\nDigite um numero inteiro positivo: ");
		scanf("%d",&N);
		fat=1;
		j=N;
		printf("\n\n");
		if(N==0){
			printf("0!=1");
			printf("\n\n");
		}
		else{
			printf("\n %d",N);
			printf("!= ");
			for(fat=1;j>0;j--){
				fat=fat*j;
				printf("%d",j);
				printf(".");
			}
			printf("=%d",fat);
			printf("\n\n");
		}
		printf("\n\nDeseja calcular o fatorial de outro numéro? s/n");
		scanf("%s",&resposta);
	}
	while(resposta!='n');
	return(0);
}
