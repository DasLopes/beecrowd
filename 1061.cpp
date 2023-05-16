#include <iostream>
#include <string>
using namespace std;
int main(){

    string texto;
    int vet_in[4];
    int vet_fim[4];
    int vet_res[4];

    //cin >> texto >> vet_in[0];
    //cin >> vet_in[1] >> texto >> vet_in[2] >> texto >> vet_in[3];

    for (int i = 0; i < 4; i++){
        if (i == 0) cin >> texto;
        do{
            cin >> vet_in[i];
        }while(vet_in[i] < 0);
        if (i == 1) cin >> texto;
        if (i == 2) cin >> texto;
    }


    //cin >> texto >> vet_fim[0];
    //cin >> vet_fim[1] >> texto >> vet_fim[2] >> texto >> vet_fim[3];

    for (int i = 0; i < 4; i++){
        if (i == 0) cin >> texto;
        do{
            cin >> vet_fim[i];
        }while(vet_fim[i] < 0);
        if (i == 1) cin >> texto;
        if (i == 2) cin >> texto;
    }

    for(int i = 3; i >= 0; i--){
        vet_res[i] = vet_fim[i] - vet_in[i];
    }

    if (vet_res[3] < 0){
        vet_res[3] += 60;
        vet_res[2] -= 1;
    }
    if (vet_res[2] < 0){
        vet_res[2] += 60;
        vet_res[1] -= 1;
    }
    if (vet_res[1] < 0){
        vet_res[1] += 24;
        vet_res[0] -= 1;
    }
        cout << vet_res[0] << " dia(s)" << endl;
        cout << vet_res[1] << " hora(s)" << endl;
        cout << vet_res[2] << " minutos(s)" << endl;
        cout << vet_res[3] << " segundos(s)" << endl;
}
