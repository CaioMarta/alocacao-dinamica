#include"stdio.h"
#include "stdlib.h"

int main()
{
	int num, i, *p;
	
	printf("\n Digite o tamanho do vetor");
	scanf("%d",&num);
	p=(int*)malloc(num * sizeof(int));
	if(p==NULL)
	{
		printf("\n memoria insuficiente");
		exit(1); //aborta o programa 1 para o S.O
	}
	else{
		for (i=0;i<num; i++)
		{
			scanf("%d",&p[i]);
			
		}
	printf("\n Vetor de inteiros alocados dinamicamente");
	for(i=0; i<num;i++)
	{
		printf("%d",p[i]);
	}
	free(p);
	}	
	
	return 0;
}