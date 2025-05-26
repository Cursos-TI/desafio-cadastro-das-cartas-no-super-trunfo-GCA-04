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
 
 /*
 códigos acima para a realização das operações matemáticas
 com o objetivo de dar o resultado da Densidade Populacional e Pib per Capita
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
 

 /*
 Os códigos acima servem para exibir na tela as informações,
  sobre a primeira e a segunda carta, fornecidas pelo usuário.
  Informa também o resultado do cálculo referente a Densidade Populacional e o Pib per capita.
 */

 printf("\n");

 printf("Comparação entre Carta 1 e Carta 2 (Atributo: PIB)\n");
    
    printf("\n");
 
 printf("PIB Carta 1: %.2f\n", pib1);
 printf("PIB Carta 2: %.2f\n", pib2);

 if(pib1 > pib2){
    printf("Carta 1 venceu\n"); // Resultado se a condição do if for verdadeira
 } else {
    printf("Carta 2 venceu\n"); // Resultado se a condição do if for falsa
 }
 

 printf("\n");

 
 return 0;
    
}
