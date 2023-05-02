#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float salario, novo_salario, reajuste, percentual;
    cin >> salario;

    if (salario <= 400){
        percentual = 15;
        reajuste = salario / 100 * percentual;
        novo_salario = salario + reajuste;
    }else if(salario <= 800){
        percentual = 12;
        reajuste = salario / 100 * percentual;
        novo_salario = salario + reajuste;
    }else if(salario <= 1200){
        percentual = 10;
        reajuste = salario / 100 * percentual;
        novo_salario = salario + reajuste;
    }else if(salario <= 2000){
        percentual = 7;
        reajuste = salario / 100 * percentual;
        novo_salario = salario + reajuste;
    }else{
        percentual = 4;
        reajuste = salario / 100 * percentual;
        novo_salario = salario + reajuste;
    }
    cout << "Novo salario: " << fixed << setprecision(2) << novo_salario <<  endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << percentual << " %" << endl;
}
