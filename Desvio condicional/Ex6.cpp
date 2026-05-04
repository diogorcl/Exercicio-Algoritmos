#include <iostream>
using namespace std;

float CalcMedia(float n, float n2, float n3){
    return (n+n2+n3)/3;
}

int main(){
    string nome;
    float n, n2, n3, media;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite suas 3 notas: ";
    cin >> n >> n2 >> n3;

    media = CalcMedia (n, n2, n3);
    
    if (media >= 6){
        cout << nome << ", você foi aprovado com média: " << media;
    }else{
        cout << nome << ", você foi reprovado com média: " << media;
    }
    return 0;
}