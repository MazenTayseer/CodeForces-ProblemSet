//Mazen Tayseer
//Accepted
#include <iostream>
using namespace std;
 
int main()
{
    string s;
    int n = 1;
    cin >> s;
    for (int i = 1; i <= s.length(); i++) {
        if (s[i] == s[i - 1]) {
            n++;
            if (n == 7) {
                cout << "YES";
                return 0;
            }
        }
        else {
            n = 1;
        }
    }
    cout << "NO";
}