#include <stdio.h>
#include <stdlib.h>

main(){
	float sal_bruto, inss;
	
	printf("Digite o salario bruto: ");
	scanf("%f", &sal_bruto);
	
	if(sal_bruto<=1903.98){
		printf("FAIXA 1: ISENTO");
	}
	
	if(sal_bruto>1903.98 && sal_bruto<=2826.65){
		inss=(sal_bruto*0.075)-142.80;
		printf("FAIXA 2: %.2f", inss);
	}
	if( sal_bruto>2826.65 && sal_bruto<=3751.05){
		inss=(sal_bruto*0.15)-354.80;
		printf("FAIXA 3: %.2f", inss);
	}
	if( sal_bruto>3751.05 && sal_bruto<=4664.68){
		inss=(sal_bruto*0.225)-636.13;
		printf("FAIXA 4: %.2f", inss);
	}
	if(sal_bruto>4664.68){
		inss=(sal_bruto*0.275)-869.36;
		printf("FAIXA 5: %.2f", inss);
	}
	
	
}
