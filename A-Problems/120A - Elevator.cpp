//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;
 
using namespace std;
 
 
 
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
 
	string s;
	int n;
	cin >> s >> n;
 
	if (s == "front") {
		if (n == 1) {
			cout << "L";
		}
		else if (n == 2) {
			cout << "R";
		}
 
	}
	else if (s == "back") {
		if (n == 1) {
			cout << "R";
		}
		else if (n == 2) {
			cout << "L";
		}
	}
 
}