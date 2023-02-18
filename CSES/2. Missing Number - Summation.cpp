/*
https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	long long expectedSum = 0, arraySum = 0;

	cin >> n;
	expectedSum = n * (n + 1) / 2;

	for (long long i = 0; i < n - 1; i++)
	{
		int a;
		cin >> a;
		arraySum += a;
	}
	cout << (expectedSum - arraySum);
}