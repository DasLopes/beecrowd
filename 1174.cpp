#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cout << fixed << setprecision(1);
	int i;
	float vetor[100];
	for(i=0; i<100; i++){
		cin >> vetor[i];
	}
	for(i=0; i<100; i++){
		if(vetor[i] <= 10){
			cout << "A[" << i << "] = " << vetor[i] << endl;
		}
	}
}
