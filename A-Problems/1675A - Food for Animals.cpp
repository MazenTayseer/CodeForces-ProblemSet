//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>

#define a1 long long int
#define pb push_back

using namespace std;


int main() {
    int n; cin >> n;
    while (n--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x -= a;
        y -= b;

        if (x < 0) {
            x = 0;
        }
        else if (y < 0) {
            y = 0;
        }

        bool flag = true;
        if (c < x + y) {
            flag = false;
        }


        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }


}