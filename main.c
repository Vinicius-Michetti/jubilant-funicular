#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo que crie um vetor para armazenar 5 veículos (struct) e oferece ao usuário
funcionalidades para:
a) Procurar o veículo com a maior quilometragem.
b) Troque o veículo com a maior quilometragem com o da primeira posição.
c) Imprima a lista de quilometragens após a troca.
Cada uma dessas etapas deve ser implementada em funções ou procedimentos separados
*/

struct Veiculo {
       int id;
       float quilometragem;
};

typedef struct Veiculo veiculo;

float maior_quilometragem (veiculo veiculo[], int tamanho){

      float maior = veiculo[0].quilometragem;
      for (int i = 0; i < tamanho; i++){
        if (veiculo[i].quilometragem > maior){
            maior = i;
        }
      }
      return maior;
}

void troca (veiculo veiculos[], int maior){

      veiculo temp = veiculos[0];
      veiculos[0] = veiculos[maior];
      veiculos[maior] = temp;
}

void imprimir(veiculo veiculos[], int tamanho) {
    printf("Quilometragens dos veiculos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Veiculo %d: %.2f km\n", i, veiculos[i].quilometragem);
    }
}


int main()
{
    veiculo veiculo[5];

    for (int i = 0; i < 5; i++){
         printf("Digite a quilometragem do veiculo %d: ", i + 1);
         scanf("%f", &veiculo[i].quilometragem);
    }

    int Maior = maior_quilometragem(veiculo, 5);

    troca(veiculo, Maior);
    imprimir(veiculo, 5);
}
