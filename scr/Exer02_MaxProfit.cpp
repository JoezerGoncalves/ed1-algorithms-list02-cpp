//
// Created by Iftm on 18/08/2026.
//

#include <iostream>
#include <vector>

int main() {
    int ent;
    std::cin >> ent;

    std::vector<int> price(ent);
    int i;
    for(i=0; i<ent; i++){
        std::cin >> price[i];
    }

    int lucro=0;
    int j;
    for(i=0; i<ent; i++){
        for (j=i+1; j<ent; j++){
            if(price[j]-price[i]>lucro){
                lucro = price[j]-price[i];
            }
        }
    }

    std::cout << "Lucro " << lucro << " ";

    return 0;
}
