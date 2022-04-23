//Mazen Tayseer
//Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		int counterAB = 0, counterBA = 0;
		cin >> s;
		for (int j = 0; j<int(s.length()); j++)
		{
			if (s[j] == 'a' && s[j + 1] == 'b')
				counterAB++;
			if (s[j] == 'b' && s[j + 1] == 'a')
				counterBA++;

		}
		if (counterAB == counterBA)
		{
			cout << s << endl;
		}
		else
		{
			int cntAB = 0; int cntBA = 0;
			for (int j = 0; j<int(s.length()); j++)
			{
				if (s[j] == 'a')
					s[j] = 'b';
				else
					s[j] = 'a';
				for (int k = 0; k<int(s.length()); k++)
				{
					if (s[k] == 'a' && s[k + 1] == 'b')
						cntAB++;
					if (s[k] == 'b' && s[k + 1] == 'a')
						cntBA++;

				}
				if (cntAB == cntBA)
				{
					cout << s << endl;
					break;
				}
				else { continue; }

			}
		}
		
		
		
	}


}

