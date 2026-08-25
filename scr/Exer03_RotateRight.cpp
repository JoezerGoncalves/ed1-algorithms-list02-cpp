//
// Created by Iftm on 18/08/2026.
//
#include <iostream>
#include <vector>

int main() {
    int tam, quant;
    std::cin >> tam >> quant;

    // Uso de std::vector para substituir os arrays dinâmicos do C
    std::vector<int> vetor(tam);
    std::vector<int> vetorresul(tam);
    
    int inicio = 0;
    int posi = quant;
    int i;

    for(i=0; i<tam; i++){
        std::cin >> vetor[i];
    }

    for(i=0; i<tam; i++){
        if(i<tam-quant){
            vetorresul[posi] = vetor[i];
            posi++;
        }else{
            vetorresul[inicio] = vetor[i];
            inicio++;
        }
    }

    for(i=0; i<tam; i++){
        std::cout << vetorresul[i] << " ";
    }

    return 0;
}
