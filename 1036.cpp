#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double a,b,c, x1, x2, delta;
    cin >> a >> b >> c;
    if (a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        delta = pow(b,2) - 4 * a * c;
        if (delta > 0){
            x1 = (-(b)+sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
            x2 = (-(b)-sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
            cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
            cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
        }else{
            if (delta == 0){
                x1 = (-(b)+sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
                x2 = (-(b)-sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
                cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
                cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
                cout << "Raízes x1 e x2 Reais e iguais" << endl;
            }else{
                cout << "Impossivel calcular" << endl;
            }
        }
    }
    return 0;
}
