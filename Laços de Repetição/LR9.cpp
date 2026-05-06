#include <iostream>
using namespace std;

int main(){
    int n1=1, n2=1, soma;
    int i = 0;
    
    cout << n1 << ", " << n2 << ", ";
    
    while(i<18){
        soma = n1 + n2;
        cout << soma << ", ";
        n1 = n2;
        n2 = soma;
        i++;
    }
    return 0;
}