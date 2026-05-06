#include <iostream>
using namespace std;

int main(){
    int base, exp, res = 1;
    
    cout << "Digite um numero para a Base: ";
    cin >> base;
    cout << "Digite um numero para o Expoente: ";
    cin >> exp;

    int i = 0;

    while(i<exp){
        res = res*base;
        i++;
    }
    cout << "O resultado é: " << res;

    return 0;
}