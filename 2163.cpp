#include <iostream>
using namespace std;
int main(){
    int n, m, x = 0, y = 0; // declaração de variaveis
    cin >> n >> m; // entrada de dados para dimenssionar o tamanho da matriz
    int matriz [n][m]; // declaração da matriz

    for (int l = 0; l < n; l++){ // laço para percorrer a linha da matriz
        for (int c = 0; c < m; c++){ // laço para percorrer a coluna da matriz
            cin >> matriz[l][c]; // entrada de dados para preencher o conteúdo da matriz
        }
    }

    for (int l = 0; l < n; l++){ // laço para percorrer a linha da matriz
        for (int c = 0; c < m; c++){ // laço para percorrer a coluna da matriz
            if (matriz[l][c] == 42){ // condição para verificar se há o número 42 matriz
                if (matriz[l-1][c-1] == 7 && matriz[l-1][c] == 7 && matriz[l-1][c+1] == 7){ // condição para verificar se há o número 7 nestas coordenadas da matriz
                    if (matriz[l][c-1] == 7 && matriz[l][c-1] == 7){ // condição para verificar se há o número 7 nestas coordenadas da matriz
                        if (matriz[l+1][c-1] == 7 && matriz[l+1][c] == 7 && matriz[l+1][c+1] == 7){ // condição para verificar se há o número 7 nestas coordenadas da matriz
                            x = l + 1; // atribui a localização a variavel acrescido do número 1
                            y = c + 1; // atribui a localização a variavel acrescido do número 1
                        }
                    }
                }
            }
        }
    }
    cout << x << " " << y << endl; // saída de dados mostrando as coordenadas na tela
}
