#include <iostream>
#include <string>
using namespace std;
int main(){

    string texto;
    int vet_in[4];
    int vet_fim[4];
    int vet_res[4];

    for(int i = 0; i < 4; i++){
        if (i == 0) cin >> texto;
        cin >> vet_in[i];
        if (i == 1) cin >> texto;
        if (i == 2) cin >> texto;
    }

    for(int i = 0; i < 4; i++){
        if (i == 0) cin >> texto;
        cin >> vet_fim[i];
        if (i == 1) cin >> texto;
        if (i == 2) cin >> texto;
    }

    for(int i = 0; i < 4; i++){
        vet_res[i] = vet_fim[i] - vet_in[i];
    }

    for (int i = 3; i > 1; i--){
        if (vet_res[i] < 0){
            vet_res[i] += 60;
            vet_res[i-1] --;
        }
    }

    if (vet_res[1] < 0){
        vet_res[1] += 24;
        vet_res[0] --;
    }

    for (int i = 0; i < 4; i++){
        if (i == 0) cout << vet_res[i] << " dia(s)" << endl;
        else if (i == 1) cout << vet_res[1] << " hora(s)" << endl;
        else if (i == 2) cout << vet_res[2] << " minutos(s)" << endl;
        else if (i == 3) cout << vet_res[3] << " segundos(s)" << endl;
    }
}
