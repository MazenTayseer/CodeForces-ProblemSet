//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;
 
using namespace std;
 
 
 
int main() {
	a1 n, m;
	cin >> n >> m;
 
	a1 x = pow(2, n);
	a1 y = m % x;
 
	cout << y << endl;
 
}