#include <stdio.h>

int main()
{
	/*cartas*/

	/*carta 1*/
	char estado1;
	char cod_carta1[4]= "A01";
	char nome_cidade1[30]= "Guarulhos";
	int populacao1;
	float area1;
	float pib1;
	int pontos_turisticos1;
    float densidade_popu1;
	float pibpercapta1;

    estado1 = 'A';
    populacao1 = 1291784;
    area1 = 318;
    pib1 = 77370000;
    pontos_turisticos1 = 25;
    densidade_popu1 = (float) populacao1 / area1;
    pibpercapta1 = (float) pib1 / populacao;
  
    /*carta 2*/

	char estado2;
	char cod_carta2[4]= "B01";
	char nome_cidade2[30] = "BeloHorizonte";
	int populacao2;
	float area2;
	float pib2;
	int pontos_turisticos2;
    float densidade_popu2;
	float pibpercapta2;

    estado2 = 'B';
    populacao2 = 2315560;
    area2 = 331;
    pib2 = 105000000;
    pontos_turisticos2=30;
    densidade_popu2 = (float)populacao2 / area2;
    pibpercapta2 = (float)pib2 / populacao2;

    printf("***Buscando informações sobre as cartas***\n");

	printf("***carta 1***\n");

		//estado
		printf("Digite o estado da carta-(de A até H): ");
		scanf(" %c", &estado1);
		//codigo
		printf("Digite o codigo da carta:  ");
		scanf("%s", &cod_carta1);
		//nomedacidade
		printf("Digite o nome da cidade: ");
		scanf("%s", &nome_cidade1);
		//população
		printf("Digite o tamanho da população da cidade: ");
		scanf("%d", &populacao1);
		//area
		printf("Digite o tamanho da area da cidade: ");
		scanf("%f", &area1);
		//pib
		printf("Digite o pib da cidade: ");
		scanf("%f", &pib1);
		//ponto ponto_turisticos
		printf("Digite a quantidade de pontos turisticos: ");
		scanf("%d", &pontos_turisticos1);

	printf("***carta 2***\n");

		//estado
		printf("Digite o estado da carta-(de A até H): ");
		scanf(" %c", &estado2);
		//codigodacarta
		printf("Digite o codigo da carta:  ");
		scanf("%s", &cod_carta2);
		//nomedacidade
		printf("Digite o nome da cidade:  ");
		scanf("%s", &nome_cidade2);
		//população
		printf("Digite o tamanho da população da cidade: ");
		scanf("%d", &populacao2);
		//area
		printf("Digite o tamanho da area da cidade: ");
		scanf("%f", &area2);
		//pib
		printf("Digite o pib da cidade: ");
		scanf("%f", &pib2);
		//pontos turisticos
		printf("Digite a quantidade de pontos turisticos: ");
		scanf("%d", &pontos_turisticos2);

	printf("***mostrando as cartas***\n");

		printf("***carta 1***\n");
		printf("Estado: %c\n", estado1);
		printf("Codigo: %s\n", cod_carta1);
		printf("Nome da cidade: %s\n", nome_cidade1);
		printf("População: %d habitantes\n", populacao1);
		printf("Area:%.2f  km²\n", area1);
		printf("Pib: %.2f\n", pib1);
		printf("pontos turisticos: %d\n", pontos_turisticos1);
        printf("densidade populacional: %.2f hab/km²\n", densidade_popu1);
	    printf("pib per capta: %.2f reais\n", pibpercapta1);

		printf("***carta 2***\n");
		printf("Estado: %c\n", estado2);
		printf("Codigo: %s\n", cod_carta2);
		printf("Nome da cidade: %s\n", nome_cidade2);
		printf("População: %d habitantes\n", populacao2);
		printf("Area:%.2f  km²\n", area2);
		printf("Pib: %.2f\n", pib2);
		printf("pontos turisticos: %d\n", pontos_turisticos2);
        printf("densidade populacional: %.2f hab/km²\n", densidade_popu2);
	    printf("pib per capta: %.2f reais\n", pibpercapta2);

        return 0;
}
