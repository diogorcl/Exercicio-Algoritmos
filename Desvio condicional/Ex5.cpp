#include <iostream>
using namespace std;

int main(){
    float n, n2 , n3;
    
    cout << "Digite 3 números reais: ";
    cin >> n >> n2 >> n3;

    if (n < n2 and n < n3){
        cout << "O menor número é: " << n << ".";
    }else if( n2 < n and n2 < n3){
        cout << "O menor número é: " << n2 << ".";
    }else {
        cout << "O menor número é: " << n3 << ".";
    }
    return 0;
}