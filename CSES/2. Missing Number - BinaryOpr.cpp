/*
https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	long long a = 0, b = 0;

	cin >> n;

	long long int arr[n-1];

	for (long long i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}

	for (long long i = 1; i <= n; i++)
	{
		a = a ^ i;
	}

	for (long long i = 0; i < n - 1; i++)
	{
		b = b ^ arr[i];
	}

	cout << (a^b) << endl;
}