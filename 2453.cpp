#include <iostream>
#include <string>
using namespace std;
int main(){
    string msn;
    getline(cin, msn);
    int tam = msn.size();
    for(int i = 1; i <= tam; i+=2){
        cout << msn[i];
        if (msn[i+1] == 32){
            cout << msn[i+1];
            i++;
        }
    }
    cout << endl;
}
