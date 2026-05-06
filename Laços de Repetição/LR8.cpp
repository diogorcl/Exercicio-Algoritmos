#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n1=1, n2=1, calc;

    while(n1!=0 || n2 !=0){
    cout << "Digite 2 números: ";
    cin >> n1 >> n2;
    if (n1== 0 && n2==0){
        break;
    }
    int opcao;
    cout << "Escolha uma opção\n1- Soma\n2- Produto\n3- Divisão\n4- Potência\n";
    cin >> opcao;

    switch(opcao){
        case 1:
            calc = n1+n2;
            break;
        case 2:
            calc = n1*n2;
            break;
        case 3:
            calc = n1/n2;
            break;
        case 4:
            calc = pow(n1, n2);
            break;
    }
    cout << "Resultado: " << calc << endl;
    }
    return 0;
}
