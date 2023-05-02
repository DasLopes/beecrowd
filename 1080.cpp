#include <iostream>
using namespace std;
int main(){    
    int num, maior, pos;
    
    for (int i = 1; i <= 100; i++){
        cin >> num;
        if (i == 1){
            maior = num;
            pos = i;
        }else{
            if (num > maior){
                maior = num;
                pos = i;
            }
        }
    }
    cout << maior << endl;
    cout << pos << endl;
    return 0;
}
