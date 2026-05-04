#include <iostream>
using namespace std;

int main(){
    float n, n2;
    cout << "Digite 2 números reais: ";
    cin >> n >> n2;

    if(n > n2){
        cout << "O maior número é: " << n << ".";
    }else if(n2 > n){
        cout << "O maior número é: " << n2 << ".";
    }else{
        cout << "Os número digitados são iguais.";
    }
    return 0;
}