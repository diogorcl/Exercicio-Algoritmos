#include <iostream>
using namespace std;

int main(){
    int fator, fin = 1;
    cout << "Digite um número inteiro: ";
    cin >> fator;
    int i=1;
    while(i<=fator){
        fin *= i;
        i++;
    }
    cout << "Resultado: " << fin;

    return 0;
}