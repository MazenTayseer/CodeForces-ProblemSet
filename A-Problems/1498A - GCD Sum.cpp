//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;

using namespace std;


a1 gcd(a1 a, a1 b) {
	if (b == 0) return a;

	return gcd(b, a % b);
}

a1 sum(a1 a) {
	a1 x = 0;
	while (a != 0) {
		x = x + (a % 10);
		a /= 10;
	}
	return x;
}

int main() {
	a1 a; cin >> a;
	a1 n;

	while (a--) {
		cin >> n;
		if (gcd(n, sum(n)) > 1) {
			cout << n << endl;
		}
		else {
			while (gcd(n, sum(n)) == 1) {
				n++;
				gcd(n, sum(n));
			}
			cout << n << endl;
		}
	}

}



