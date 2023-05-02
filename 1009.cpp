#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char nome[20];
    double s, v, t;
    cin >> nome >> s >> v;
    t = s + (v / 100 * 15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << t << endl;
    return 0;
}
