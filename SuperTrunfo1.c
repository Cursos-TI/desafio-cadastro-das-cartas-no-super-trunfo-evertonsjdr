#include <stdio.h>

int main() {
    char estado; // Para armazenar uma única letra
    printf("Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado); // O espaço antes de %c ignora espaços em branco

    char codigo_carta[5]; // Para armazenar o código da carta
    printf("Digite a letra de um estado seguido de 01 a 04 --> Ex: A01, B05:\n");
    scanf("%4s", codigo_carta); // Limita a entrada a 4 caracteres

    char nome_cidade[20]; // Para armazenar o nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%19s", nome_cidade); // Limita a entrada a 19 caracteres

    int numero_habitantes; // Para armazenar o número de habitantes
    printf("Insira o número de habitantes da cidade (em milhares):\n");
    scanf("%d", &numero_habitantes); // Passa o endereço da variável

    float area_cidade; // Para armazenar a área da cidade
    printf("Digite a área da cidade em KM²:\n");
    scanf("%f", &area_cidade); // Passa o endereço da variável

    float pib_cidade; // Para armazenar o PIB da cidade
    printf("Digite o PIB da cidade (em milhões):\n");
    scanf("%f", &pib_cidade); // Passa o endereço da variável

    int turisticos_cidade; // Para armazenar o número de pontos turísticos
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos_cidade); // Passa o endereço da variável

    // Exibe os dados coletados
    printf("\n\nCarta1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n",
           estado, codigo_carta, nome_cidade, numero_habitantes, area_cidade, pib_cidade, turisticos_cidade);

    return 0;
}
