#include <iostream>
using namespace std;

int main(){
    float n, s = 1, calc, soma = 0;
    cout << "Digite o valor de N: ";
    cin >> n;

    while(s<=n){
        cout << "1/" << s;
        if(s!=n){
            cout << " + ";
        }
        calc = 1/s;
        soma += calc;
        s++;
    }
    cout << "\nResultado: " << soma;
    return 0;
}