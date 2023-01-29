#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main(){
    float l1,l2,l3,l4,l5;
    float a1,a2,a3,a4,a5;
    float area1,area2,area3,area4,area5;
    float total_areas;

    //Obtendo  os lados e as alturas dos 5 lados da piscina
    printf("Informe o PRIMEIRO lado da piscina: ");
    scanf("%f", &l1);
    printf("Informe a PRIMEIRA altura da piscina: ");
    scanf("%f", &a1);
    printf("Informe o SEGUNDO lado da piscina: ");
    scanf("%f", &l2);
    printf("Informe a SEGUNDA altura da piscina: ");
    scanf("%f", &a2);
    printf("Informe o TERCEIRO lado da piscina: ");
    scanf("%f", &l3);
    printf("Informe a TERCEIRA altura da piscina: ");
    scanf("%f", &a3);
    printf("Informe o QUARTO lado da piscina: ");
    scanf("%f", &l4);
    printf("Informe a QUARTA altura da piscina: ");
    scanf("%f", &a4);
    printf("Informe o QUINTA lado da piscina: ");
    scanf("%f", &l5);
    printf("Informe a QUINTA altura da piscina: ");
    scanf("%f", &a5);

    //calculando a area
    area1=(l1*a1);
    area2=(l2*a2);
    area3=(l3*a3);
    area4=(l4*a4);
    area5=(l5*a5);

    //somando as areas
    total_areas=area1+area2+area3+area4+area5;


    //solicitando os lados e as alturas do ladrilho
    float al,ll, area_ladrilho;
    printf("Informe o lado do ladrilho: ");
    scanf("%f", &ll);
    printf("Informe a altura do ladrilho: ");
    scanf("%f", &al);
    //obtendo a area do ladrilho
    area_ladrilho=ll*al;
	
    //dividindo a area total pela area do ladrilho para obter a quantidade de ladrilho utilizada
    float quanti_ladrilho;
	
    quanti_ladrilho=(total_areas/area_ladrilho);








    
    printf("A quantidade de ladrilho que deve ser comprado e: %.2f  m2", quanti_ladrilho);


}
