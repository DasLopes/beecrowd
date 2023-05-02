#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (){
    cout << fixed << setprecision(1);

	float a,b,c, aux;

	cin >> a >> b >> c;

    if (a < b){
    	aux = a;
    	a = b;
    	b = aux;
	}
	if (b < c){
		aux = b;
		b = c;
		c = aux;
	}
	 if (a < b){
    	aux = a;
    	a = b;
    	b = aux;
	}

	if (a >= b + c){
		cout << "NAO FORMA TRIANGULO" << endl;
	}else if (pow(a, 2) == pow(b, 2) + pow(c, 2)){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if (pow(a, 2) > pow(b, 2) + pow(c, 2)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
        cout << "TRIANGULO ISOSCELES" << endl;
    }else{
        cout << "TRIANGULO ACUTANGULO" << endl;
        if (a == b && b == c){
			cout << "TRIANGULO EQUILATERO" << endl;
        }else{
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
}
