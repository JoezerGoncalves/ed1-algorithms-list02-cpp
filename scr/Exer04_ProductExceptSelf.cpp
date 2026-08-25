//
// Created by Iftm on 18/08/2026.
//
#include <iostream>
#include <vector>

int main() {
    int ent;
    std::cin >> ent;
    
    // Uso de std::vector para substituir os arrays dinâmicos do C
    std::vector<int> vetor(ent);
    std::vector<int> vetorR(ent);

    int i, j;

    for(i=0; i<ent; i++){
        std::cin >> vetor[i];
    }

    int mult = 1;

    for(i=0; i<ent; i++){
        for(j=0; j<ent; j++){
            if(i != j){
                mult = vetor[j]*mult;
            }
        }
        vetorR[i] = mult;
        mult = 1;
    }

    for(i=0; i<ent; i++){
        std::cout << vetorR[i] << " ";
    }

    return 0;
}
