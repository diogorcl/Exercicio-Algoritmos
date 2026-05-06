#include <iostream>
using namespace std;

int main(){
    int numero;
    int i=1;

    while(i<=10){
        numero = 5*i;
        cout << "5x" << i << " = " << numero << endl;
        i++;
    }
    return 0;
}