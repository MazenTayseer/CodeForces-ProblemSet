//Mazen Tayseer
//Accepted
#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i <= s.length(); i++) {
		if (s[i] >= 33 && s[i] <= 126) {
			if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
				cout << "YES";
				return 0;
			}
		}
	}
	
	cout << "NO";
}