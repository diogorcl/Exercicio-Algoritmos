#include <iostream>
using namespace std;

int main(){
    int valor[20], pares = 0, impares = 0;
    cout << "(Digíte 20 número inteiros)";

    for(int i=0; i<20; i++){
        cout << "\nNúmero " << i+1 << ": ";
        cin >> valor[i];
        if(valor[i]%2 == 0){
            pares += 1;
        }else{
            impares += 1;
        }
    }
    cout << "Valores pares: " << pares << "\nValores ímpares: " << impares;

    return 0;
}