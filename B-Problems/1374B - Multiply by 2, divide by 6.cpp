//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;
 
using namespace std;
 
 
int solve(a1 x, a1 c) {
	if (c > 1000) {
		c++;
		return -1;
	}
	c++;
	if (x == 1) {
		return c - 1;
	}
 
	if (x % 6 == 0) {
		solve(x / 6, c);
	}
	else {
		solve(x * 2, c);
	}
}
 
int main() {
	a1 n; cin >> n;
	vector<a1> v;
 
	for (a1 i = 0; i < n; i++) {
		a1 in; cin >> in;
		v.push_back(in);
	}
 
	for (a1 i = 0; i < v.size(); i++) {
		cout << solve(v[i], 0) << endl;
	}
 
}
 