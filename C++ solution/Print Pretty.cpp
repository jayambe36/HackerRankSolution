
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
        //SMITPATEL9898
        cout << nouppercase << left << showbase << hex << long(A) << "\n";
        cout << showpos << setw(15) << right << setfill('_') << fixed << setprecision(2) << B << "\n";
        cout << uppercase << noshowpos << scientific << setprecision(9) << C << "\n";

	}
	return 0;

}