#include <iostream>
using namespace std;
int main(){
    int n, camera; // declaração das variaveis
    cin >> n; // entrada de dados para determinar o tamanho da matriz
    int matriz[n+1][n+1]; // declaração da matriz acrescido de uma unidade

    for (int l = 0; l < n+1; l++){ // laço para preencher a matriz
        for (int c = 0; c < n+1; c++){
            while (true){ // laço para validação permitindo apenas 0 ou 1
                cin >> camera;
                if (camera == 0) break;
                if (camera == 1) break;
            }
            matriz[l][c] = camera; // entrada de dados na matriz
        }
    }

    for (int l = 0; l < n; l++){ // laço para verificar a existência de cameras suficientes na quadra
        for (int c = 0; c < n; c++){
            if (matriz[l][c] + matriz[l][c+1] + matriz[l+1][c] + matriz[l+1][c+1] >= 2){ // condição para verificar a existência de cameras suficientes na quadra
                cout << "S";
            }else{
                cout << "U";
            }
        }
        cout << endl;
    }
}
