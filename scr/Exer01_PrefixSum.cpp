#include <iostream>
#include <vector>
using namespace std;


int main(){

    int ent;
    cin >> ent;

    vector<int> vetor(ent);
    int i;
    for(i=0; i<ent; i++){
        cin >> vetor[i];
    }

    int soma=0;

    for(i=0; i<ent; i++){
        soma = soma + vetor[i];
        cout << soma << " ";
    }
    return 0;
}


//
// Created by Iftm on 18/08/2026.
//
/*
Questão 1. Soma Cumulativa de Vetor
Dado um vetor de números inteiros nums, construa e exiba a soma cumulativa do vetor. A soma
cumulativa no índice i é definida como a soma de todos os elementos desde o índice 0 até o índice i
(ou seja, soma[i] = Pi
                    j=0 nums[j]).

Este problema explora o conceito de vetor de prefixo (prefix sum), fundamental para otimizar
consultas de soma em intervalos em estruturas de dados.

Entrada
A primeira linha contém um inteiro N (1 ≤ N ≤ 104), representando o tamanho do vetor. A segunda
linha contém N inteiros separados por espaço.

Saída
Imprima uma única linha contendo os N valores da soma cumulativa, separados por espaço.

Exemplo de Entrada      Exemplo de Saída
4                       1 3 6 10
1 2 3 4
--------------------------------------------
5                       1 2 3 4 5
1 1 1 1 1
--------------------------------------------
Explicação
• Exemplo 1: A soma cumulativa é calculada como: [1, (1 + 2), (1 + 2 + 3), (1 + 2 + 3 + 4)] =
[1, 3, 6, 10].
• Exemplo 2: A cada passo adicionamos +1 ao valor acumulado anterior: [1, (1 + 1), (1 + 1 +
1), . . . ] = [1, 2, 3, 4, 5].
*/
