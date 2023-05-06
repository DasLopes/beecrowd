#include <iostream>
using namespace std;
int main(){
    int n, tam, presenca;
    cin >> n;
    tam = n + 1;
    int matriz[tam][tam];

    for (int l = 0; l < tam; l++){
        for (int c = 0; c < tam; c++){
            while (true){
                cin >> presenca;
                if (presenca == 0) break;
                if (presenca == 1) break;
            }
        }
    }

    for (int l = 0; l < tam; l++){
        int camera = 0;
        for (int c = 0; c < tam; c++){
            if (matriz[l][c] == 1){
                camera++;
            }else if(matriz[l][c+1] == 1){
                camera++;
            }else if(matriz[l+1][c] == 1){
                camera++;
            }else if(matriz[l+1][c+1] == 1){
                camera++;
            }
        }
        if(camera >= 2){
                cout << "S";
            }else{
                cout << "U";
            }
    }
}
