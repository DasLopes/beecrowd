#include <iostream>
using namespace std;

int main(){
    int n, c100, c50, c20, c10, c5, c2, c1, s;
    cin >> n;
    s = n;
    c100 = n / 100;
    n = n - (c100 * 100);
    c50 = n / 50;
    n = n - (c50 * 50);
    c20 = n / 20;
    n = n - (c20 * 20);
    c10 = n / 10;
    n = n - (c10 * 10);
    c5 = n / 5;
    n = n - (c5 * 5);
    c2 = n / 2;
    n = n - (c2 * 2);
    c1 = n / 1;
    cout << s << endl;
    cout << c100 << " nota(s) de R$ 100,00" << endl;
    cout << c50 << " nota(s) de R$ 50,00" << endl;
    cout << c20 << " nota(s) de R$ 20,00" << endl;
    cout << c10 << " nota(s) de R$ 10,00" << endl;
    cout << c5 << " nota(s) de R$ 5,00" << endl;
    cout << c2 << " nota(s) de R$ 2,00" << endl;
    cout << c1 << " nota(s) de R$ 1,00" << endl;
}
