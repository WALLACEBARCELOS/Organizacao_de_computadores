#include <stdio.h>
#include <stdlib.h>


main()
{
	//DECLARAÇÃO DE VARIAVEL 
	float sal, desconto, total;
	
	//IMPRESSAO E LEITURA
	printf("Informe o salario bruto(R$): ");
	scanf("%f", &sal);
	
	//CONDIÇÃO
	if (sal<=1659.38)
	{
		desconto=(sal*0.08);
	}
	
	if (sal>1659.38 && sal<=2765.66)
	{
		desconto=(sal*0.09);
	}
	
	if (sal>2765.66 && sal<=5531.31)
	{
		desconto=(sal*0.09);
	}
	
	//SALARIO COM DESCONTO
	total=sal-desconto;
	
	//IMPRESSAO DO RESULTADO
	printf("\n\nO desconto he de: R$%.f\n", desconto);
	
	printf("\nSeu salario apos o desconto he: R$%.f", total);
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	
}
