#include <iostream>
using namespace std;
int main(){
    float n;
    int dinheiro;
    cin >> n;
    dinheiro = n *= 100;

    cout << "NOTAS:" << endl;

    cout << dinheiro / 10000 << " nota(s) de R$ 100.00" << endl;
    dinheiro %= 10000;
    cout << dinheiro / 5000 << " nota(s) de R$ 50.00" << endl;
    dinheiro %= 5000;
    cout << dinheiro / 2000 << " nota(s) de R$ 20.00" << endl;
    dinheiro %= 2000;
    cout << dinheiro / 1000 << " nota(s) de R$ 10.00" << endl;
    dinheiro %= 1000;
    cout << dinheiro / 500 << " nota(s) de R$ 5.00" << endl;
    dinheiro %= 500;
    cout << dinheiro / 200 << " nota(s) de R$ 2.00" << endl;
    dinheiro %= 200;

	cout << "MOEDAS:" << endl;

    cout << dinheiro / 100 << " moeda(s) de R$ 1.00" << endl;
    dinheiro %= 100;
    cout << dinheiro / 50 << " moeda(s) de R$ 0.50" << endl;
    dinheiro %= 50;
    cout << dinheiro / 25 << " moeda(s) de R$ 0.25" << endl;
    dinheiro %= 25;
    cout << dinheiro / 10 << " moeda(s) de R$ 0.10" << endl;
    dinheiro %= 10;
    cout << dinheiro / 5 << " moeda(s) de R$ 0.05" << endl;
    dinheiro %= 5;
    cout << dinheiro << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
