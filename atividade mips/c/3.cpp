#include <stdio.h>
#include <stdlib.h>


main()
{
	//DECLARA��O DE VARIAVEL
	int quarto;
	
	//LEITURA E IMPRESSAO
	printf("Informe o numero do quarto: ");
	scanf("%d", &quarto);
	printf("\n\n\n");
	//CONDI��O
	if(quarto%2==0)
	{
		printf("\t\t\tSeu quarto esta no corredor a DIREITA");
	}
	else
	{
		printf("\t\t\tSeu quarto esta no corredor a ESQUERDA");	
	}
	
	printf("\n\n\n\n\n\n\n");
}
