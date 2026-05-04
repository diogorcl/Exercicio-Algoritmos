#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;

    if(n > 0){
        cout << "O número " << n << " é positivo.";
    }else if(n < 0){
        cout << "O número " << n << " é negativo.";
    }else{
        cout << "O número é igual a zero.";
    }
    return 0;
}