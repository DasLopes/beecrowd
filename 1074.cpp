#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 0){
            cout << "NULL" << endl;
        }else if (x > 0){
            if (x % 2 == 0){
                cout << "EVEN ";
                cout << "POSITIVE" << endl;
            }else{
                cout << "ODD ";
                cout << "POSITIVE" << endl;
            }
        }else{
            if (x % 2 == 0){
                cout << "EVEN ";
                cout << "NEGATIVE" << endl;
            }else{
                cout << "ODD ";
                cout << "NEGATIVE" << endl;
            }
        }
    }
}
