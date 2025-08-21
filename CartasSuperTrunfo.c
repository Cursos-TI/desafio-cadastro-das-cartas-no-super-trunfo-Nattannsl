
#include <stdio.h>

int main(){

char estadoA, estadoB;
char codigoA[3], codigoB[3];
char cidadeA[10], cidadeB[10];
int populacaoA, populacaoB;
float areaA, areaB;
float pibA, pibB;
int pontosA, pontosB;

printf("(CADASTRO 01 SUPER TRUNFO)\n");

printf("Digite a letra correspondente ao seu estado:\n");
scanf ("%c", &estadoA);

printf("Digite sua cidade:\n");
scanf("%s",cidadeA);

printf("Digite seu codigo:\n");
scanf("%s",codigoA);

printf("Numero da populacao:\n");
scanf("%d", &populacaoA);

printf("Informe a area km^2:\n");
scanf("%f", &areaA);

printf("Informe o PIB:\n");
scanf("%f", &pibA);

printf("Quantidade de pontos turisticos:\n");
scanf("%d", &pontosA);

printf("CARTA (01) - CADASTRO CONCLUIDO COM SUCESSO!!!\n");


printf("Estado:%c \n", estadoA);
printf("Cidade:%s \n", cidadeA);
printf("Codigo:%s \n", codigoA);
printf("Populacao:%d \n", populacaoA); 
printf("Area:%f \n", areaA);
printf("PIB:%f \n", pibA);
printf("Quantidade de pontos turisticos:%d \n", pontosA); 


printf("CADASTRO 02 SUPER TRUNFO\n");

printf("Digite a letra correspondente ao seu estado:\n");
scanf(" %c", &estadoB);

printf("Digite sua cidade:\n");
scanf("%s",cidadeB);

printf("Digite seu codigo:\n");
scanf("%s",codigoB);

printf("Numero da populacao:\n");
scanf("%d", &populacaoB);

printf("Informe a area km^2:\n");
scanf("%f", &areaB);

printf("Informe o PIB:\n");
scanf("%f", &pibB);

printf("Quantidade de pontos turisticos:\n");
scanf("%d", &pontosB);


printf("CARTA (02) - CADASTRO CONCLUIDO COM SUCESSO!!!\n");


printf("Estado:%c \n", estadoB);
printf("Cidade:%s \n", cidadeB);
printf("Codigo:%s \n", codigoB);
printf("Populacao:%d \n", populacaoB);
printf("Area:%f \n", areaB);
printf("PIB:%f \n", pibB);
printf("Quantidade de pontos turisticos:%d", pontosB);


}