#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Comparar cartas dos paises usando dois atributos escolhidos pelo jogador;
// O jogador com maior numero dos atributos (densidade é invertido);
// Correção na descrição

int main() {
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

    // Gerar número aleatório
    srand(time(0));
    ataque1 = 1;// rand() % 100 + 1; // Numero entre 1 e 100
    ataque2 = 0;// rand() % 100 + 1; // Numero entre 1 e 100
    defesa1 = 1;// rand() % 100 + 1; // Numero entre 1 e 100
    defesa2 = 0;// rand() % 100 + 1; // Numero entre 1 e 100
    recuo1 = 0;// rand() % 100 + 1; // Numero entre 1 e 100
    recuo2 = 1;// rand() % 100 + 1; // Numero entre 1 e 100
    
    // Início do jogo
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
    printf("Você escolheu a opção: Ataque\n");
    resultado1 = ataque1 > ataque2 ? 1 : 0;
        break;

    case 'D':
    case 'd':
    printf("Você escolheu a opção: Defesa\n");
    resultado1 = defesa1 > defesa2 ? 1 : 0;
        break;    
    
    case 'R':
    case 'r':
    printf("Você escolheu a opção: Recuo\n");
    resultado1 = recuo1 > recuo2 ? 1 : 0;    
        break;    

    default:
    printf("Opção inválida!\n");
        break;
    }

    // Parte 2
    printf("Segundo Embate!\n");
    printf("Escolha o segundo atributo.\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {printf("Você escolheu o mesmo atributo!\n");} else {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
        printf("Você escolheu a opção: Ataque\n");
        resultado2 = ataque1 > ataque2 ? 1 : 0;
            break;

        case 'D':
        case 'd':
        printf("Você escolheu a opção: Defesa\n");
        resultado2 = defesa1 > defesa2 ? 1 : 0;
            break;    
        
        case 'R':
        case 'r':
        printf("Você escolheu a opção: Recuo\n");
        resultado2 = recuo1 > recuo2 ? 1 : 0;    
            break;    

        default:
        printf("Opção inválida!\n");
            break;
        }

        if (resultado1 && resultado2) {
            printf("Você ganhou!\n");
        } else if ( resultado1 != resultado2) {
            printf("Você empatou!\n");
        } else {
            printf("Você perdeu!\n");
        }
    }

    return 0;
}