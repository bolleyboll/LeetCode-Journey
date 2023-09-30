#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int w;
	cin >> w;
	if (w > 2 && w % 2 == 0)
	{
		cout << "YES";
		return 0;
	}
	cout << "NO";
}