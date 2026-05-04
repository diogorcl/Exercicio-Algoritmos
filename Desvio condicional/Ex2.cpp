#include <iostream>
using namespace std;

int main(){
    int Horas, Min;
    
    cout << "Digite dois números inteiros: ";
    cin >> Horas >> Min;

    if (Horas < 24 and Min < 60 and Horas > -1 and Min > -1){
        cout << "A hora é válida";
    }else{
        cout << "A hora é inválida";
    }
    return 0;
}