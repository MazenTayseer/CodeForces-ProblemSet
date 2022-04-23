//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;
 
 
using namespace std;
 
a1 n;
a1 solve(a1 lucky = 0, a1 index = 0) {
	if (lucky == n) {
		return index;
	}
	else if (lucky > n) {
		return -1;
	}
 
 
	return max(
		solve(lucky * 10 + 4, index * 2 + 1),
		solve(lucky * 10 + 7, index * 2 + 2)
	);
}
 
 
int main() {
	cin >> n;
	cout << solve() << endl;
 
 
}