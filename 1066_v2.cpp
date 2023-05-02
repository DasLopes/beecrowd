#include <iostream>

using namespace std;

int main() {

    int n1, n2, n3, n4, n5, pares=0, impares=0, positivo=0, negativo=0;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    if (n1 % 2 == 0){pares ++;}else{impares++;}
    if (n2 % 2 == 0){pares ++;}else{impares++;}
    if (n3 % 2 == 0){pares ++;}else{impares++;}
    if (n4 % 2 == 0){pares ++;}else{impares++;}
    if (n5 % 2 == 0){pares ++;}else{impares++;}

    if (n1 > 0){positivo++;}else if(n1 < 0){negativo++;}
    if (n2 > 0){positivo++;}else if(n2 < 0){negativo++;}
    if (n3 > 0){positivo++;}else if(n3 < 0){negativo++;}
    if (n4 > 0){positivo++;}else if(n4 < 0){negativo++;}
    if (n5 > 0){positivo++;}else if(n5 < 0){negativo++;}

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;
    return 0;
}
