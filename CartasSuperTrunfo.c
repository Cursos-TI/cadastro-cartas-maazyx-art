#include <stdio.h>

int main()
{
	/*cartas*/

	/*carta 1*/
	char estado1 = 'a';
	char cod_carta1[4] = "A01";
	char nome_cidade1[30] = "Guarulhos";
	unsigned long int populacao1 = 1291784;
	float area1 = 318;
	float pib1 = 177.37;
	int pontos_turisticos1 = 25;
	float densidade_popu1;
	float pibpercapta1;
	double SuperPoder1;
	double resultado1;

    densidade_popu1 = (float) populacao1 / area1;
	pibpercapta1 = (float)(pib1 / populacao1);
	/*carta 2*/

	char estado2 = 'b';
	char cod_carta2[4] = "B01";
	char nome_cidade2[30] = "BeloHorizonte";
	unsigned long int populacao2 = 2315560;
	float area2 = 331;
	float pib2 = 105.83;
	int pontos_turisticos2 = 30;
	float densidade_popu2;
	float pibpercapta2;
	double SuperPoder2;
	double resultado2;

	densidade_popu2 = (float)populacao2 / area2;
	pibpercapta2 = (float)pib2 / populacao2;
	/*Buscando informações sobre as cartas*/
      
	/*carta 1*/
	
    printf("****Informações sobre a carta****\n");

		// estado
		printf("Digite o estado da carta-(de A até H): ");
		scanf(" %c", &estado1);
		// codigo
		printf("Digite o codigo da carta:  ");
		scanf("%s", &cod_carta1);
		// nomedacidade
		printf("Digite o nome da cidade: ");
		scanf("%s", &nome_cidade1);
		// população
		printf("Digite o tamanho da população da cidade: ");
		scanf("%lu", &populacao1);
		// area
		printf("Digite o tamanho da area da cidade: ");
		scanf("%f", &area1);
		// pib
		printf("Digite o pib da cidade: ");
		scanf("%f", &pib1);
		// ponto ponto_turisticos
		printf("Digite a quantidade de pontos turisticos: ");
		scanf("%d", &pontos_turisticos1);

	/*carta 2*/

	printf("****Informações sobre a carta****\n");

		// estado
		printf("Digite o estado da carta-(de A até H): ");
		scanf(" %c", &estado2);
		// codigodacarta
		printf("Digite o codigo da carta:  ");
		scanf("%s", &cod_carta2);
		// nomedacidade
		printf("Digite o nome da cidade:  ");
		scanf("%s", &nome_cidade2);
		// população
		printf("Digite o tamanho da população da cidade: ");
		scanf("%lu", &populacao2);
		// area
		printf("Digite o tamanho da area da cidade: ");
		scanf("%f", &area2);
		// pib
		printf("Digite o pib da cidade: ");
		scanf("%f", &pib2);
		// pontos turisticos
		printf("Digite a quantidade de pontos turisticos: ");
		scanf("%d", &pontos_turisticos2);

	/*mostrando as cartas*/

	/*carta 1*/
	printf("***revelando a carta***\n");

		printf("Estado: %c\n", estado1);
		printf("Codigo: %s\n", cod_carta1);
		printf("Nome da cidade: %s\n", nome_cidade1);
		printf("População: %lu habitantes\n", populacao1);
		printf("Area:%.2f  km²\n", area1);
		printf("Pib: %.2f \n", pib1);
		printf("pontos turisticos: %d\n", pontos_turisticos1);
		
		printf("densidade populacional: %.2f hab/km²\n", densidade_popu1);
		printf("pib per capta: %.8f reais\n", pibpercapta1);

	/*carta 2*/
	printf("***revelando a carta***\n");

		printf("Estado: %c\n", estado2);
		printf("Codigo: %s\n", cod_carta2);
		printf("Nome da cidade: %s\n", nome_cidade2);
		printf("População: %lu habitantes\n", populacao2);
		printf("Area:%.2f  km²\n", area2);
		printf("Pib: %.2f \n", pib2);
		printf("pontos turisticos: %d\n", pontos_turisticos2);
		
		printf("densidade populacional: %.2f hab/km²\n", densidade_popu2);
		printf("pib per capta: %.8f reais\n", pibpercapta2);

	printf("***comparando as cartas***\n");

		SuperPoder1 = (double)populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0 / densidade_popu1) + pibpercapta1;
		printf("Super Poder: %.2lf\n", SuperPoder1);

		SuperPoder2 = (double)populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0 / densidade_popu2) + pibpercapta2;
		printf("Super Poder: %.2lf\n", SuperPoder2);

		resultado1 = SuperPoder1;
		resultado2 = SuperPoder2;

		printf("Carta %s  é maior que a carta %s? %lu\n",  cod_carta1, cod_carta2,(resultado1) > (resultado2));

		printf("Carta %s  é maior que a carta %s?: %lu\n", cod_carta2, cod_carta1,(resultado2) > (resultado1));

	return 0;
}
