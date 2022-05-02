//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;
 
using namespace std;
 
 
int main()
{
	a1 n; cin >> n;
	a1 x, y;
 
	while (n--) {
		cin >> x >> y;
 
		bool flag = true;
		for (a1 i = 1; i <= y; i++) {
			for (a1 j = 1; j <= y; j++) {

				if (pow(x, i) * j == y) {
					cout << i << " " << j << endl;
					flag = true;
					break;
				}
				else {
					flag = false;
				}
				
			}
			break;
		}
 
		if (flag == false) {
			cout << 0 << " " << 0 << endl;
		}
	}
 
 
}