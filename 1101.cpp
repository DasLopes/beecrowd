#include <iostream>
using namespace std;
int main(){
    while(true){
        int m, n;
        int aux, soma=0;
        cin >> m >> n;
        if (m<=0 || n<=0)break;
        if (m>n){
            aux = m;
            m = n;
            n = aux;
        }
        for (int i = m; i <= n; i++){
            cout << i << " ";
            soma += i;
        }
        cout << "Sun=" << soma << endl;
    }
}
