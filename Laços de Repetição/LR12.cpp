#include <iostream>
using namespace std;

int main(){
    int numero[20], menor;

    cout << "(Digite 20 números inteiros)\nNúmero 1: ";
    cin >> numero[0];
    menor = numero[0];
   
    for(int i=1; i<20; i++){
        cout << "\nNúmero " << i+1 << ": ";
        cin >> numero[i];
        
        if(numero[i]<menor){
            menor = numero[i];
        }
    }    
    cout << "O menor número é: " << menor;

    return 0;
}