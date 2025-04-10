#include <stdio.h>

int main() {

        // Carta 1
        int carta1 = 1;
        char estado1[] = "SC";
        char codigo1[] = "A01";
        char nomedacidade1[] = "Florianópolis";
        int populacao1 = 8058411;
        float area1 = 95730.690;
        float pib1 = 428.571;
        int numerodepontosturisticos1 = 98;
    
        printf("Carta %d\n", carta1);
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nomedacidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB: %.3f milhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n\n", numerodepontosturisticos1);
    
        // Carta 2
        int carta2 = 2;
        char estado2[] = "PR";
        char codigo2[] = "B02";
        char nomedacidade2[] = "Curitiba";
        int populacao2 = 11444380;
        float area2 = 199298.98;
        float pib2 = 654.57;
        int numerodepontosturisticos2 = 89;
    
        printf("Carta %d\n", carta2);
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nomedacidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);

    return 0;
}
