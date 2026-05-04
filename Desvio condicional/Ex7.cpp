#include <iostream>
using namespace std;

int main(){
    int L1, L2, L3;
    
    cout << "Digite 3 números inteiros (lados de um triângulo): ";
    cin >> L1 >> L2 >> L3;
    
    if(L1 == L2 && L1 == L3){
        cout << "O triangulo é equilátero.";
    }else if(L1 == L2 && L1 != L3 || L1 != L2 && L1 == L3){
        cout << "O triangulo é isósceles.";
    }else{
        cout << "O triangulo é escaleno.";
    }
    return 0;
}