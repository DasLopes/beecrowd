#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);
    float salario, imposto;
    cin >> salario;
    if (salario <= 2000){
        cout << "Isento" << endl;
    }else{
        if(salario <= 3000){
            salario = salario - 2000;
            imposto = salario / 100 * 8;
            cout << "R$ " << imposto << endl;
        }else if(salario <= 4500){
            salario = salario - 2000;
            if(salario > 1000){
                salario = salario - 1000;
                imposto = 1000 / 100 * 8;
                imposto = imposto + (salario / 100 * 18);
                cout << "R$ " << imposto << endl;
            }else{
                imposto = salario / 100 * 8;
                cout << "R$ " << imposto << endl;
            }
        }else{
            salario = salario - 2000;
            if(salario > 1000){
                salario = salario - 1000;
                imposto = 1000 / 100 * 8;
                salario = salario - 1500;
                imposto = imposto + (1500 / 100 * 18);
                imposto = imposto + (salario / 100 * 28);
                cout << "R$ " << imposto << endl;
            }
        }
    }
}
