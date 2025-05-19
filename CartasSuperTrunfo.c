#include <stdio.h>

int main(){

 char estado1[20], codigo1[20], cidade1[20],estado2[20], codigo2[20], cidade2[20];
 int populacao1, turismo1, populacao2, turismo2;
 float area1, pib1, area2, pib2;
 
 
 
 /*

 "estado": o nome do estado que a carta se refere
 "codigo": representa o código da carta
 "cidade": indica o nome da cidade da carta
 "populacao": quantidade de habitantes da cidade
 "turismo": quantidade de pontos túristicos da cidade
 "area": área da cidade em quilômetros quadrados
 "pib": produto interno bruto da cidade
 
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
 scanf("%d", &populacao1);

 printf("Digite a quantidade de pontos túristicos da cidade:");
 scanf("%d", &turismo1);

 // Os códigos acima servem para a leitura dos dados da primeira carta

 printf("Digite a área em km²:");
 scanf("%f", &area1);

 printf("Digite o PIB da cidade:");
 scanf("%f", &pib1);

 printf("Carta 2\n");

 printf("Digite o nome do estado:");
 scanf("%s", estado2);

 printf("Digite o código da carta:");
 scanf("%s", codigo2); 

 printf("Digite o nome da cidade:");
 scanf("%s", cidade2);
 
 printf("Digite a população da cidade:");
 scanf("%d", &populacao2);

 printf("Digite a quantidade de pontos túristicos da cidade:");
 scanf("%d", &turismo2);

 printf("Digite a área em km²:");
 scanf("%f", &area2);

 printf("Digite o PIB da cidade:");
 scanf("%f", &pib2);

 // Os códigos acima servem para a leitura dos dados da segunda carta


printf("\n");

 printf("Carta 1\n");
 printf("Estado:%s\n",estado1);
 printf("Código da carta:%s\n",codigo1);
 printf("Cidade:%s\n",cidade1);
 printf("População:%d\n",populacao1);
 printf("Número de pontos turísticos:%d\n",turismo1);
 printf("Área:%.2f km²\n",area1);
 printf("PIB:%.2f bilhões de reais\n",pib1);

 printf("\n");

 printf("Carta 2\n");
 printf("Estado:%s\n",estado2);
 printf("Código da carta:%s\n",codigo2);
 printf("Cidade:%s\n",cidade2);
 printf("População:%d\n",populacao2);
 printf("Número de pontos turísticos:%d\n",turismo2);
 printf("Área:%f km²\n",area2);
 printf("PIB:%f bilhões de reais\n",pib2);

 // Os códigos acima servem para exibir na tela as informações, sobre a primeira e a segunda carta, fornecidas pelo usuário

 printf("\n");

 
return 0;
    
}
