#include <iostream>
using namespace std;

int main(){
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'u' or letra == 'A' or letra == 'E' or letra == 'I' or letra == 'O' or letra== 'U'){
        cout << letra << " é uma vogal.";
    } else{
        cout << letra << " não é uma vogal.";
    }
    return 0;
}