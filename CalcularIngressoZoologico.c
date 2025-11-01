#include <stdio.h>

float calcular_preco(int idade) {
    if (idade <= 12) {
        return 10.0;
    } else if (idade >= 60) {
        return 15.0;
    } else {
        return 30.0;
    }
}

int validar_quantidade(int qtd) {
    if (qtd >= 1 && qtd <= 5) {
        return qtd;  
    } else {
        return -1; 
    } 
}

int main() {
    int idade, qtd, i;
    float preco, total = 0;

    // Verificação de quantidade
    do {
        printf("Digite a quantidade de ingressos (max 5): ");
        scanf("%d", &qtd);
        if (validar_quantidade(qtd) == -1) {
            printf("Erro: voce deve escolher entre 1 e 5 ingressos!\n");
        }
    } while (validar_quantidade(qtd) == -1);

    // Processamento
    for (i = 1; i <= qtd; i++) {
        printf("Digite a idade do visitante %d: ", i);
        scanf("%d", &idade);

        preco = calcular_preco(idade);
        printf("Ingresso %d: R$ %.2f\n", i, preco);
        total += preco;
    }

    // Saída
    printf("\nTotal a pagar: R$ %.2f\n", total);
    printf("\nPressione Enter para sair...");
    getchar(); 
    getchar(); 

    return 0;
}
