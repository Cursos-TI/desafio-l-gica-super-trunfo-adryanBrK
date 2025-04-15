#include <stdio.h>
#include <string.h>

int main() {
   char nome1[50], codigo1[5], cidade1[50];
   int populacao1, pontosturisticos1;
   float area1, PIB1, PIBpercapito1 = 0, densidade1 = 0;

   printf("Nome do estado: ");
   scanf("%s", nome1);
   printf("Codigo da carta: ");
   scanf("%s", codigo1);
   printf("Nome da cidade: ");
   scanf("%s", cidade1);
   printf("Quantos habitantes: ");
   scanf("%d", &populacao1);
   printf("Qual sua area (em km²): ");
   scanf("%f", &area1);
   printf("Qual é seu PIB (em milhões): ");
   scanf("%f", &PIB1);
   printf("Quantos pontos turísticos ela tem: ");
   scanf("%d", &pontosturisticos1);

   if (area1 != 0) {
        densidade1 = populacao1 / area1;
        printf("A densidade populacional é: %.2f habitantes por km²\n", densidade1);
   } else {
        printf("Erro: A área não pode ser zero.\n");
   }

   if (populacao1 != 0) {
        PIBpercapito1 = PIB1 / populacao1;
        printf("PIB per capita: %.2f\n", PIBpercapito1);
   } else {
        printf("Erro: população não pode ser zero.\n");
   }

   printf("\n===== Dados do Estado 1 =====\n");
   printf("Estado: %s\n", nome1);
   printf("Codigo: %s\n", codigo1);
   printf("Cidade: %s\n", cidade1);
   printf("Populacao: %d\n", populacao1);
   printf("Area: %.2f km²\n", area1);
   printf("PIB: %.2f milhões\n", PIB1);
   printf("Pontos turísticos: %d\n", pontosturisticos1);
   printf("Densidade demográfica: %.2f habitantes por km²\n", densidade1);
   printf("PIB per capita: %.2f\n\n", PIBpercapito1);

   char nome2[50], codigo2[5], cidade2[50];
   int populacao2, pontosturisticos2;
   float area2, PIB2, PIBpercapito2 = 0, densidade2 = 0;

   printf("Nome do estado: ");
   scanf("%s", nome2);
   printf("Codigo da carta: ");
   scanf("%s", codigo2);
   printf("Nome da cidade: ");
   scanf("%s", cidade2);
   printf("Quantos habitantes: ");
   scanf("%d", &populacao2);
   printf("Qual sua area (em km²): ");
   scanf("%f", &area2);
   printf("Qual é seu PIB (em milhões): ");
   scanf("%f", &PIB2);
   printf("Quantos pontos turísticos ela tem: ");
   scanf("%d", &pontosturisticos2);

   if (area2 != 0) {
        densidade2 = populacao2 / area2;
        printf("A densidade populacional é: %.2f habitantes por km²\n", densidade2);
   } else {
        printf("Erro: A área não pode ser zero.\n");
   }

   if (populacao2 != 0) {
        PIBpercapito2 = PIB2 / populacao2;
        printf("PIB per capita: %.2f\n", PIBpercapito2);
   } else {
        printf("Erro: população não pode ser zero.\n");
   }

   printf("\n===== Dados do Estado 2 =====\n");
   printf("Estado: %s\n", nome2);
   printf("Codigo: %s\n", codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("Populacao: %d\n", populacao2);
   printf("Area: %.2f km²\n", area2);
   printf("PIB: %.2f milhões\n", PIB2);
   printf("Pontos turísticos: %d\n", pontosturisticos2);
   printf("Densidade demográfica: %.2f habitantes por km²\n", densidade2);
   printf("PIB per capita: %.2f\n\n", PIBpercapito2);

   // Comparando densidade populacional
   if (densidade1 < densidade2) {
    printf("A menor densidade é do estado: %s com %.2f habitantes por km²\n", nome1, densidade1);
} else if (densidade2 < densidade1) {
    printf("A menor densidade é do estado: %s com %.2f habitantes por km²\n", nome2, densidade2);
} else {
    printf("Ambos os estados (%s e %s) têm a mesma densidade: %.2f habitantes por km²\n", nome1, nome2, densidade1);
}
// Comparando o PIB per capito
if (PIBpercapito1 > PIBpercapito2) {
    printf("O maior PIB per capita é do estado: %s com %.2f\n", nome1, PIBpercapito1);
} else if (PIBpercapito2 > PIBpercapito1) {
    printf("O maior PIB per capita é do estado: %s com %.2f\n", nome2, PIBpercapito2);
} else {
    printf("Ambos os estados (%s e %s) têm o mesmo PIB per capita: %.2f\n", nome1, nome2, PIBpercapito1);
}
   return 0;
}
