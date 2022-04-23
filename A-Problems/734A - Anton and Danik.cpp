//Mazen Tayseer
//Accepted
#include <iostream>
using namespace std;
int main(){
	int n,a=0,d=0;
	char x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x == 'A') {
			a++;
		}
		else if (x == 'D') {
			d++;
		}
	}
	if (a > d) {
		cout << "Anton";
	}
	else if (a < d) {
		cout << "Danik";
	}
	else {
		cout << "Friendship";
	}
 
}