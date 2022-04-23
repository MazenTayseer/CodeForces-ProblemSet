//Mazen Tayseer
//Accepted
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	string x;
	string t;

	cin >> s >> x >> t;

	s.append(x);

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	if (s == t) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}


}

