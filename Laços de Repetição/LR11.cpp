#include <iostream>
using namespace std;

int main(){
    int idade[10], soma = 0;
    
    cout << "Digite a idade de 10 pessoas.";

    for(int i=0; i<10; i++){
        cout << "\nIdade da pessoa " << i+1 << ": ";
        cin >> idade[i];
        if(idade[i]>=18){
            soma += 1;
        }
    }
    cout << soma << " pessoas são maiores de 18 anos.";
    return 0;
}