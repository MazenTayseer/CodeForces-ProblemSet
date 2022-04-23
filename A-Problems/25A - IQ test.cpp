//Mazen Tayseer
//Accepted
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int even = 0;
	int odd = 0;
	cin >> n;
	int arr[10000];

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		if (arr[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}

	for (int i = 1; i <= n; i++) {
		
		if (even > odd) {
			if (arr[i] % 2 == 0) {
				continue;
			}
			else {
				cout << i;
			}
		}
		else if (even < odd) {
			if (arr[i] % 2 != 0) {
				continue;
			}
			else {
				cout << i;
			}
		}

	}
}