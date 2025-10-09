#include <stdio.h>


     int main() {
     //cartas
      char estado1= 'A'; 
      char cod_carta1 [4]= "A01";  
      char nome_cidade1 [30] = "Guarulhos";
      int populacao1= 1291784;
      float area1 = 318;
      float pib1 = 77.37;
      int pontos_turisticos1 = 15;

      char estado2 = 'B';
      char cod_carta2[4] = "B01";
      char nome_cidade2[30] = "BeloHorizonte";
      int populacao2 = 2315560;
      float area2 = 331;
      float pib2 = 105.83;
      int pontos_turisticos2 = 15;

          
      char estado3 = 'C';
      char cod_carta3[4] ="C01";
      char nome_cidade3[30] = "Salvador";
      int populacao3 =2675000;
      float area3 = 693;
      float pib3 = 62.95;
      int pontos_turisticos3 = 15;

      char estado4 = 'D';
      char cod_carta4[4] = "D01";
      char nome_cidade4[30] = "Curitiba";
      int populacao4 = 1751000;
      float area4 = 435;
      float pib4 = 98.00;
      int pontos_turisticos4 = 15;

      char estado5 = 'E';
      char cod_carta5[4] = "E01";
      char nome_cidade5[30] = "Manaus";
      int populacao5 = 1802000;
      float area5 = 11.401;
      float pib5 = 103.28;
      int pontos_turisticos5 = 15;

      char estado6 = 'F';
      char cod_carta6[4] = "F01";
      char nome_cidade6[30] ="Fortaleza";
      int populacao6 = 2452000;
      float area6 = 312;
      float pib6 = 73.44;
      int pontos_turisticos6 = 15;

      char estado7 = 'G';
      char cod_carta7[4] = "G01";
      char nome_cidade7[30] = "PortoAlegre";
      int populacao7 = 1488000;
      float area7 = 497;
      float pib7 = 81.56;
      int pontos_turisticos7 = 15;

      char estado8 = 'H';
      char cod_carta8[4] = "H01";
      char nome_cidade8[30] = "RiodeJaneiro";
      int populacao8 = 6320000;
      float area8 = 1200;
      float pib8 = 359.6;
      int pontos_turisticos8 = 15;
     //pedindo informações sobre as cartas:

      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c", &estado1);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s", &cod_carta1);
      //nomedacidade
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome_cidade1);    
      //população
      printf("Digite o tamanho da população: ");
      scanf("%d", &populacao1);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g", &area1 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib1);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos1);

      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c",&estado2);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s",&cod_carta2);
      //nomedacidade
      printf("Digite o nome da cidade:  ");
      scanf("%s",&nome_cidade2);    
      //população
      printf("Digite o tamanho da população: ");
      scanf("%d",&populacao2);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g",&area2 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib2);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos2);

      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c", &estado3);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s", &cod_carta3);
      //nomedacidade
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome_cidade3);    
     //população
      printf("Digite o tamanho da população: ");
      scanf("%d", &populacao3);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g", &area3 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib3);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos3);

      //estado
      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c", &estado4);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s", &cod_carta4);
      //nomedacidade
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome_cidade4);    
     //população
      printf("Digite o tamanho da população: ");
      scanf("%d", &populacao4);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g", &area4 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib4);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos4);

      //estado
      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c", &estado5);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s", &cod_carta5);
      //nomedacidade
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome_cidade5);    
     //população
      printf("Digite o tamanho da população: ");
      scanf("%d", &populacao5);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g", &area5 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib5);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos5);

      //estado
      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c", &estado6);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s", &cod_carta6);
      //nomedacidade
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome_cidade6);    
     //população
      printf("Digite o tamanho da população: ");
      scanf("%d", &populacao6);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g", &area6 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib6);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos6);

      //estado
      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c", &estado7);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s", &cod_carta7);
      //nomedacidade
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome_cidade7);    
     //população
      printf("Digite o tamanho da população: ");
      scanf("%d", &populacao7);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g", &area7 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib7);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos7);

      //estado
      printf("Digite o estado da carta-(de A até H): ");
      scanf(" %c", &estado8);
      //codigodacarta
      printf("Digite o codigo da carta:  ");
      scanf("%s", &cod_carta8);
      //nomedacidade
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome_cidade8);    
     //população
      printf("Digite o tamanho da população: ");
      scanf("%d", &populacao8);
      //area
      printf("Digite o tamanho da area da cidade: ");
      scanf("%g", &area8 );
      //pib
      printf("Digite o pib da cidade: ");
      scanf("%g", &pib8);
      //ponto ponto_turisticos
      printf("Digite a quantidade de pontos turisticos: ");
      scanf("%d", &pontos_turisticos8);

      //mostrando as cartas:
      printf("Estado: %c\n", estado1);      
      printf("Codigo: %s\n", cod_carta1);      
      printf("Nome da cidade: %s\n", nome_cidade1);      
      printf("População: %d habitantes\n", populacao1);
      printf("Area:%g km²\n", area1);
      printf("Pib: %g\n", pib1);
      printf("pontos turisticos: %d\n", pontos_turisticos1);
      
      printf("Estado: %c\n", estado2);      
      printf("Codigo: %s\n", cod_carta2);      
      printf("Nome da cidade: %s\n", nome_cidade2);      
      printf("População: %d\n", populacao2);
      printf("Area:%g km²\n", area2);
      printf("Pib: %g\n", pib2);
      printf("pontos turisticos: %d\n", pontos_turisticos2);

      printf("Estado: %c\n", estado3);      
      printf("Codigo: %s\n", cod_carta3);      
      printf("Nome da cidade: %s\n", nome_cidade3);      
      printf("População: %d\n", populacao3);
      printf("Area:%g km²\n", area3);
      printf("Pib: %g\n", pib3);
      printf("pontos turisticos: %d\n", pontos_turisticos3);

      printf("Estado: %c\n", estado4);      
      printf("Codigo: %s\n", cod_carta4);      
      printf("Nome da cidade: %s\n", nome_cidade4);      
      printf("População: %d\n", populacao4);
      printf("Area:%g km²\n", area4);
      printf("Pib: %g\n", pib4);
      printf("pontos turisticos: %d\n", pontos_turisticos4);

      printf("Estado: %c\n", estado5);      
      printf("Codigo: %s\n", cod_carta5);      
      printf("Nome da cidade: %s\n", nome_cidade5);      
      printf("População: %d\n", populacao5);
      printf("Area:%g km²\n", area5);
      printf("Pib: %g\n", pib5);
      printf("pontos turisticos: %d\n", pontos_turisticos5);

      printf("Estado: %c\n", estado6);      
      printf("Codigo: %s\n", cod_carta6);      
      printf("Nome da cidade: %s\n", nome_cidade6);      
      printf("População: %d\n", populacao6);
      printf("Area:%g km²\n", area6);
      printf("Pib: %g\n", pib6);
      printf("pontos turisticos: %d\n", pontos_turisticos6);

      printf("Estado: %c\n", estado7);      
      printf("Codigo: %s\n", cod_carta7);      
      printf("Nome da cidade: %s\n", nome_cidade7);      
      printf("População: %d\n", populacao7);
      printf("Area:%g km²\n", area7);
      printf("Pib: %g\n", pib7);
      printf("pontos turisticos: %d\n", pontos_turisticos7);

      printf("Estado: %c\n", estado8);      
      printf("Codigo: %s\n", cod_carta8);      
      printf("Nome da cidade: %s\n", nome_cidade8);      
      printf("População: %d\n", populacao8);
      printf("Area:%g km²\n", area8);
      printf("Pib: %g\n", pib8);
      printf("pontos turisticos: %d\n", pontos_turisticos8);
     }
