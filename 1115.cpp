#include <iostream>
using namespace std;
int main(){
    int x, y;
    while(true){
        cin >> x >> y;
        if (y == 0 || x == 0){
            break;
        }else{
            if(y >= 0 && x >= 0){
                cout << "primeiro" << endl;
            }else if(y >= 0 && x <= 0){
                cout << "segundo" << endl;
            }else if(y <= 0 && x <= 0){
                cout << "terceiro" << endl;
            }else if(y <= 0 && x >= 0){
                cout << "quarto" << endl;
            }
        }
    }
}
