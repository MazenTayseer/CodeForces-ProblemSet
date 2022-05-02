//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
typedef long long int a1;
 
using namespace std;
 
 
int main()
{
	int n; cin >> n;
	map<string, int> m;
 
	while (n--) {
		string x;
		cin >> x;
 
		int count = 1;
 
		for (char i = 'a'; i <= 'z'; i++) {
			for (char j = 'a'; j <= 'z'; j++) {
 
				string s = "";
 
				if (i != j) {
					s.push_back(i);
					s.push_back(j);
					m[s] = count++;
				}
 
			}
		}
 
		cout << m[x] << endl;
	}
 
 
 
}