//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;

using namespace std;

void insertArr(int arr[], int t) {
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
	}
}

int main()
{
	int n; cin >> n;
	int t;
	int arr[500];

	while (n--) {
		cin >> t;
		int even = 0, odd = 0;
		insertArr(arr, t);

		for (int i = 0; i < t; i++) {
			if (arr[i] % 2 != i % 2) {
				if (arr[i] % 2 == 0) {
					even++;
				}
				else {
					odd++;
				}
			}
		}

		if (even == odd) {
			cout << even << endl;
		}
		else {
			cout << -1 << endl;
		}

	}


}



