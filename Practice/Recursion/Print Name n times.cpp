#include <bits/stdc++.h>
using namespace std;

void func(int i, int n)
{
	if (i > n)
		return;
	cout << "Aman\n";
	func(++i, n);
}

int main()
{
	int n;
	cin >> n;
	func(1, n);
	return 0;
}

// TC: O(N)
// SC: O(N)