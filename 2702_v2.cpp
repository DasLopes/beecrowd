#include <iostream>

using namespace std;

int main() {
    //declara��o de variaveis
    int est_frango, est_bife, est_massa;
    int ped_frango, ped_bife, ped_massa;
    int tot=0;
    //entrada de dados
    cin >> est_frango>> est_bife >> est_massa;
    cin >> ped_frango >> ped_bife >> ped_massa;
    //condi��es: se pedido for maior que o estoque, tot vai receber a diferen�a entre eles.
    if(ped_frango>est_frango)tot+=ped_frango-est_frango;
    if(ped_bife>est_bife)tot+=ped_bife-est_bife;
    if(ped_massa>est_massa)tot+=ped_massa-est_massa;
    //sa�da de dados
    cout << tot << endl;
    return 0;
}
