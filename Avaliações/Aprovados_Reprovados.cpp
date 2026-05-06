//Feito por Davi Muniz e Diogo Lucas
#include <iostream>
using namespace std;

float calcMedia(float n1, float n2, float n3){ //Receita para o cálculo das médias.
    return (n1+n2+n3)/3;
    }
int main(){
    string nomes[5]; //Armazenando os dados de 5 pessoas.
    float notas1[5], notas2[5], notas3[5], medias[5]; //Armazendo as 3 notas de 5 pessoas.

    for(int i=0; i<5; i++){//Calculando a média dos 5 alunos.
        cout << "Nome do aluno " << i+1 << ": ";
        cin >> nomes[i];

        cout << "Digite as 3 notas de " << nomes[i] <<": ";
        cin >> notas1[i] >> notas2[i] >> notas3[i];

        medias[i] = calcMedia(notas1[i], notas2[i], notas3[i]);
    }

    float maiormedia = -1;//Váriaveis para verificar a maior média no final
    string maiornome = "";

    cout << "\nNome\tN1\tN2\tN3\tMédia\tSituação" << endl;// "\t" para alinhar as colunas.

    for (int i=0; i<5; i++){//Aprovado ou Reprovado
        cout << nomes[i] << "\t" << notas1[i] << "\t" << notas2[i] << "\t" << notas3[i] << "\t" << medias[i] << "\t";
        if (medias[i] >=7){
                cout << "Aprovado" << endl;
        } else {
            cout << "Reprovado" << endl;
        }

        if (medias[i] > maiormedia) {
        maiormedia = medias[i];
        maiornome = nomes[i];
        }
    }
    cout << "\nO melhor aluno foi: " << maiornome << " com " << maiormedia;
    return 0;
}