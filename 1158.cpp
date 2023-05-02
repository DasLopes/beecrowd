#include <iostream>
using namespace std;
int main (){
    int n, x, y, soma, cont;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        cin >> y;
        soma = 0;
        cont = 0;
        do{
            if (x % 2 == 1){
                soma += x;
                cont++;
            }
            x++;
        }while(cont != y);
        cout << soma << endl;
    }
}
