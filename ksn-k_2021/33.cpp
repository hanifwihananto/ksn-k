#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;
	A = B;
	B = C;
	C = A;
	
	cout << A + B + C << endl;
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	
	return 0;
}
