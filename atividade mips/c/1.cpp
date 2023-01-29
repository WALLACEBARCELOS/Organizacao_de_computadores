#include <stdio.h>
#include <stdlib.h>


main()
{
	//DECLARAÇÃO DAS VARIAVEIS
	float kg, a, imc;
	//CABEÇALHO
	printf("*******************************************************");
	printf("\n               CLINICA DE NUTRICAO");
	printf("\n*******************************************************");
	printf("\n\n                   Boa tarde!!!                  ");
	
	//ENTRADA DE MASSA E ALTURA
	printf("\n\n\nPor favor, digite a sua massa corportal(kg): ");
	scanf("%f", &kg);
	printf("Digite a sua altura: ");
	scanf("%f", &a);
	
	//CALCULO IMC
	imc=(kg/(a*a));
	
	//AJUSTANDO
	printf("\n\n     Seu indidice de massa corporal he %f    \n\n", imc);
	
	//CONDIÇÃO
	if(imc<16)
	{
		printf("         MAGREZA GRAVE");
	}
	else
	if(imc>16 && imc<17)
	{
		printf("         MAGREZA MODERADA");
	}    
	else
	if(imc>17 && imc<18.5)
	{
		printf("         MAGREZA LEVE");
	}
	else
	if(imc>18.5 && imc<25)
	{
		printf("         PARABENS!!!!, VOCE ESTA SAUDAVEL");
	}
	else
	if(imc>25 && imc<30)
	{
		printf("         SOBREPESO");
	}
	else
	if(imc>30 && imc<35)
	{
		printf("         OBESIDADE GRAU I");
	}
	else
	if(imc>35 && imc<40)
	{    
		printf("         OBESIDADE GRAU II (SEVERA)");
	}
	else
	if(imc>40)
	{
		printf("         OBESIDADE GRAU III(MORBIDA)");
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	
	
}
