#include <stdio.h>

int main(){

 char estado1[20], codigo1[20], cidade1[20],estado2[20], codigo2[20], cidade2[20];
 unsigned long int populacao1, populacao2; 
 int turismo1,turismo2;
 float area1, pib1, area2, pib2;
 float densidade1, percapita1, densidade2, percapita2, superpoder1, superpoder2;
 
 /*

 "estado": o nome do estado que a carta se refere
 "codigo": representa o código da carta
 "cidade": indica o nome da cidade da carta
 "populacao": quantidade de habitantes da cidade
 "turismo": quantidade de pontos túristicos da cidade
 "area": área da cidade em quilômetros quadrados
 "pib": produto interno bruto da cidade
 "densidade": Densidade Populacional da cidade
 "percapita": Pib per capita da cidade
 
 O número no final de cada nome significativo é referente ao número da carta
 */


 printf("Carta 1\n");

 printf("Digite o nome do estado:");
 scanf("%s", estado1);

 printf("Digite o código da carta:");
 scanf("%s", codigo1); 

 printf("Digite o nome da cidade:");
 scanf("%s", cidade1);
 
 printf("Digite a população da cidade:");
 scanf("%lu", &populacao1);

 printf("Digite a quantidade de pontos túristicos da cidade:");
 scanf("%d", &turismo1);

 printf("Digite a área em km²:");
 scanf("%f", &area1);

 printf("Digite o PIB da cidade:");
 scanf("%f", &pib1);

  // Os códigos acima servem para a leitura dos dados da primeira carta

 printf("Carta 2\n");

 printf("Digite o nome do estado:");
 scanf("%s", estado2);

 printf("Digite o código da carta:");
 scanf("%s", codigo2); 

 printf("Digite o nome da cidade:");
 scanf("%s", cidade2);
 
 printf("Digite a população da cidade:");
 scanf("%lu", &populacao2);

 printf("Digite a quantidade de pontos túristicos da cidade:");
 scanf("%d", &turismo2);

 printf("Digite a área em km²:");
 scanf("%f", &area2);

 printf("Digite o PIB da cidade:");
 scanf("%f", &pib2);

 // Os códigos acima servem para a leitura dos dados da segunda carta


 densidade1 = (float) populacao1 / area1;
 densidade2 = (float) populacao2 / area2;
 percapita1 =  (float) pib1/ populacao1;
 percapita2 =  (float) pib2 / populacao2;
 superpoder1 = (float) populacao1 + turismo1 + area1 + pib1 + (1 / densidade1) + percapita1;
 superpoder2 = (float) populacao2 + turismo2 + area2 + pib2 + (1 / densidade2) + percapita2;
 
 /*
 códigos acima para a realização das operações matemáticas
 com o objetivo de dar o resultado da Densidade Populacional, Pib per Capita E Super poder
 */


printf("\n");

 printf("Carta 1\n");
 printf("Estado:%s\n",estado1);
 printf("Código da carta:%s\n",codigo1);
 printf("Cidade:%s\n",cidade1);
 printf("População:%lu\n",populacao1);
 printf("Número de pontos turísticos:%d\n",turismo1);
 printf("Área:%.2f km²\n",area1);
 printf("PIB:%.2f bilhões de reais\n",pib1);
 printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
 printf("PIB per capita:%.2f reais\n", percapita1);
 printf("Super poder:%.2f\n", superpoder1);

 printf("\n");

 printf("Carta 2\n");
 printf("Estado:%s\n",estado2);
 printf("Código da carta:%s\n",codigo2);
 printf("Cidade:%s\n",cidade2);
 printf("População:%lu\n",populacao2);
 printf("Número de pontos turísticos:%d\n",turismo2);
 printf("Área:%.2f km²\n",area2);
 printf("PIB:%.2f bilhões de reais\n",pib2);
 printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
 printf("PIB per capita:%.2f reais\n", percapita2);
 printf("Super poder:%.2f\n", superpoder2);

 /*
 Os códigos acima servem para exibir na tela as informações,
  sobre a primeira e a segunda carta, fornecidas pelo usuário.
  Informa também o resultado do cálculo referente a Densidade Populacional, o Pib per capita e o Super Poder.
 */

 printf("\n");

 printf("Comparação entre Carta 1 e Carta 2\n");
 printf("1: vitória da Carta 1  0: vitória da Carta 2\n");

printf("\n");

printf("População:%d\n",populacao1>populacao2);
 printf("Número de pontos turísticos:%d\n",turismo1 > turismo2);
 printf("Área:%d\n",area1 > area2);
 printf("PIB:%d\n",pib1 > pib2);
 printf("Densidade Populacional:%d hab/km²\n", densidade1 < densidade2);
 printf("PIB per capita:%d \n", percapita1 > percapita2);
 printf("Super poder:%d\n", superpoder1 > superpoder2);

 printf("\n");

 
return 0;
    
}
