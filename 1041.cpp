#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    cout << fixed << setprecision(1) << endl;
    float x, y;
    cin >> x >> y;
    if (x == 0 && y == 0){
        cout << "Origem" << endl;
    }else if (x > 0 && y > 0){
        cout << "Q1" << endl;
    }else if (x < 0 && y > 0){
        cout << "Q2" << endl;
    }else if (x < 0 && y < 0){
        cout << "Q3" << endl;
    }else{
        cout << "Q4" << endl;
    }
}
