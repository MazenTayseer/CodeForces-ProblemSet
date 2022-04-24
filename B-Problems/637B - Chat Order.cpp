//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;
 
using namespace std;
 
 
int main() {
	int n; cin >> n;
	string s[2000065];
	set<string> ss;
 
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		ss.insert(s[i]);
	}
 
	for (int i = n - 1; i >= 0; i--) {
		if (ss.find(s[i]) != ss.end()) {
			cout << s[i] << endl;
			ss.erase(s[i]);
		}
	}
 
