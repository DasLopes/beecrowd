#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int y, x, soma=0;
        cin >> x >> y;

        if (x % 2 == 0){
            x += 1;
            for (int i = 0; i < y; i++){
                soma += x;
                x += 2;
            }
            cout << soma << endl;
        }else{
            for (int i = 0; i < y; i++){
                soma += x;
                x += 2;
            }
            cout << soma << endl;
        }
    }
}
