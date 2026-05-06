#include <iostream>
using namespace std;

int main(){
    float peso[25], maiorp, menorp;

    cout << "Digite o peso de 25 pessoas.\nPessoa 1: ";
    cin >> peso[0];
    maiorp = peso[0];
    menorp = peso [0];

    for(int i=1; i<25; i++){
        cout << "\nPessoa " << i+1 << ": ";
        cin >> peso[i];
        if(peso[i]> maiorp){
            maiorp = peso[i];
        }else if(peso[i]<menorp){
            menorp = peso[i];
        }
    }
    cout << "O maior peso é: " << maiorp << "\nO menor peso é: " << menorp;

    return 0;
}