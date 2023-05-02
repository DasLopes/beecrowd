#include <iostream>
using namespace std;
int main (){
    int aux;
    int tam = 19;
    int metade = tam / 2;
    int vetor[tam];
    for(int i = 0; i < 20; i++){
        cin >> vetor[i];
    }
    for(int i = 0; i < 10; i++){
        aux = vetor[i];
        vetor[i] = vetor[tam];
        vetor[tam] = aux;
        tam--;
    }
    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
}
