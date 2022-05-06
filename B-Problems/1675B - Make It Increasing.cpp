//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>

#define a1 long long int
#define pb push_back

using namespace std;

void solve() {
	vector<int> v;
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int in; cin >> in;
		v.pb(in);
	}

	int cnt = 0;
	bool flag = true;
	for (int i = t - 1; i >= 1; i--) {

		while (v[i - 1] >= v[i] && v[i-1]!=0) {
			v[i - 1] /= 2;
			cnt++;
		}

		if (v[i - 1] == v[i]) {
			flag = false;
		}
	}

	if (flag) {
		cout << cnt << endl;
	}
	else {
		cout << -1 << endl;
	}

}

int main() {
	int n; cin >> n;
	while (n--) {
		solve();
	}

}