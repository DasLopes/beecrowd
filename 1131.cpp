#include <iostream>
using namespace std;
int main(){
    int gols_inter, gols_gremio, continuar;
    int grenais=0, inter=0, gremio=0, empates=0;
    while(true){
        grenais++;

        cin >> gols_inter >> gols_gremio;
        cout << "Novo grenal (1-sim 2-nao)" << endl;

        if (gols_inter > gols_gremio)inter++;
        else if(gols_inter < gols_gremio) gremio++;
        else empates++;

        cin >> continuar;
        if (continuar == 2)break;
    }
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;
    if (inter > gremio) cout << "Inter venceu mais" << endl;
    else if (inter < gremio) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;
}
