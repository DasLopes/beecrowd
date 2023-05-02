#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    float nota1, nota2;
    int x;
    do{
        cin >> nota1;
        while(nota1 < 0 || nota1 > 10){
            cout << "nota invalida" << endl;
            cin >> nota1;
        }
        cin >> nota2;
        while(nota2 < 0 || nota2 > 10){
            cout << "nota invalida" << endl;
            cin >> nota2;
        }
        cout << "media = " << (nota1+nota2) / 2 << endl;
        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
        }while(x < 1 || x > 2);
    }while(x != 2);
}
