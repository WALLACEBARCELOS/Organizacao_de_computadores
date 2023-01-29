#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


main(){
	
	float n1, n2, n3;
	int valor, i, valor2;
	for(i=0;i<10;i++){
		printf("\nInforme o valor total de venda do usuario: ");
		scanf("%f", & n1);
		printf("\nDigite [1] para calcular e [2] para finalizar o programa: ");
		scanf("%d", & valor);
		valor2=valor;
		switch (valor){
			case(1) :
				if(n1<=1500){
					n2=n1*0.10;
					printf("A Comissao he: R$%.2f", n2);
					printf("\nO salario com a comissao he: R$%.2f", n2+1200);
				}
				if(n1>1500){
					n2=n1*0.10;
					n3=(n1-1500)*0.2;
					n3=n3+n2;
					printf("A Comissao he: R$%.2f", n3);
					printf("\nO salario com a comissao he: R$%.2f", n3+1200);
					}
			break;
				
		case(2) :
			if (valor==2){
				break;
			}
				
		default:
			printf("\nValor invalido!");
	}
	if (valor==2){
	printf("\nFinalizando o programa!");
	break;
	}

}
}
