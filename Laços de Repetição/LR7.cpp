#include <iostream>
using namespace std;

int main(){
    float numero;

    do{
        cout << "Digite um número positivo: ";
        cin >> numero;
        if(numero>0){
            cout << "O número digitado é válido.";
        }else{
            cout << "Número inválido, tente novamente.\n";
        }
    }while(numero<=0);

    return 0;
}