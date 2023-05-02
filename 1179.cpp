#include <iostream>
using namespace std;
int main(){
    int par[5];
    int impar[5];
    int cont_par = 0;
    int cont_impar = 0;
    int vetor[15];

    for (int i = 0; i < 15; i++){
        cin >> vetor[i];
    }

    for (int c = 0; c < 15; c++){
        if (vetor[c] % 2 == 0){
            par[cont_par] = vetor[c];
            cont_par++;
        }else{
            impar[cont_impar] = vetor[c];
            cont_impar++;
        }
        if(cont_par == 5){
            for(int i = 0; i < 5; i++){
                cout << "par[" << i << "] = " << par[i] << endl;
            }
            for(int i = 0; i < 5; i++){
                par[i] = {};
            }
            cont_par = 0;
        }
        if(cont_impar == 5){
            for(int i = 0; i < 5; i++){
                cout << "impar[" << i << "] = " << impar[i] << endl;
            }
            for(int i = 0; i < 5; i++){
                impar[i] = {};
            }
            cont_impar = 0;
        }
    }
    if(cont_impar < 5){
        for(int i = 0; i <= cont_impar - 1; i++){
            cout << "impar[" << i << "] = " << impar[i] << endl;
        }
    }

    if(cont_par < 5){
        for(int i = 0; i <= cont_par - 1; i++){
            cout << "par[" << i << "] = " << par[i] << endl;
        }
    }
}
