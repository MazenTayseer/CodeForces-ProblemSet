//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef unsigned long long int a1;
 
using namespace std;
 
 
int main() {
	string s;
	int n; 
	cin >> n;
	cin >> s;
 
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
 
	sort(s.begin(), s.end());
 
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == s[i + 1]) {
			s[i] = 0;
		}
	}
 
	sort(s.begin(), s.end());
 
	bool flag = true;
	int x = 97;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 0) {
			continue;
		}
		else if (s[i] == x) {
			flag = true;
		}
		else {
			flag = false;
		}
		x++;
	}
 
	if (flag && x == 123) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
 
