#include <iostream>
using namespace std;

int main(){
    int soma = 0;
    int i = 100;
    
    while(i<=200){
        soma += i;
        i++; 
    }
    cout << "A soma dos número no intervalo [100, 200] é: " << soma;
    
    return 0;
}