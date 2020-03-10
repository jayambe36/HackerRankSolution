
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        long long int x = (long long int)A;
        cout << left;
        cout << nouppercase;
        cout << showbase;
        cout << std::hex << x << endl;
        cout << noshowbase;
        cout << right;
        cout << uppercase;
        cout << showpos << fixed;
        cout << setfill('_') << setw( 15 ) << setprecision(2) << B << endl;
        cout << noshowpos;
        cout << scientific;
        cout << setprecision(9) << C << endl; 

	}
	return 0;

}