#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double A, B, C;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    cin >> A >> B >> C;
    TRIANGULO = (A * C) / 2;
    CIRCULO = 3.14159 * (C*C);
    TRAPEZIO = (A + B) / 2 * C;
    QUADRADO = B * B;
    RETANGULO = A * B;
    cout << "TRIANGULO: " << fixed << setprecision(3) << TRIANGULO << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << CIRCULO << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << TRAPEZIO << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << QUADRADO << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << RETANGULO << endl;

    return 0;
}
