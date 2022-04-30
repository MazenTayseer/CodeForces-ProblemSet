//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef unsigned long long int a1;

using namespace std;




int main() {
	int n; cin >> n;

	if (n % 2 == 0) {

		if (n % 4 == 0) {
			cout << (n / 4) - 1 << endl;
		}
		else {
			cout << n / 4 << endl;
		}

	}
	else {
		cout << 0 << endl;
	}

}



