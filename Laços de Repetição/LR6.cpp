#include <iostream>
using namespace std;

int main(){
    int numero;
    float soma = 0, qtd = 0, media = 0;
    
    cout << "Digite um número inteiro: ";
    cin >> numero;

    while(numero!=0){
        if(numero%2==0 && numero!=0){
            soma += numero;
            qtd++;
        }
        cout << "Digite outro número inteiro: ";
        cin >> numero;
    }
    
    if(qtd>0){
    media = soma/qtd;
    }
    
    cout << "A média aritmética dos numeros pares é: " << media;

    return 0;
}