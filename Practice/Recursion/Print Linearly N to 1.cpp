#include <bits/stdc++.h>
using namespace std;

void printNum(int n)
{
	if (n < 1)
		return;
	cout << n << endl;
	printNum(--n);
}

int main()
{
	int n;
	cin >> n;
	printNum(n);
	return 0;
}