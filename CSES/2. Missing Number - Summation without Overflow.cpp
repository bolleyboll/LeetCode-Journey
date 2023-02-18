/*
https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	long long sum = 1, ctr = 2;

	cin >> n;

	long long int arr[n-1];

	for (long long i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}

	for (long long i = 0; i < n - 1; i++)
	{
		sum = sum - arr[i] + ctr;
		ctr++;
	}
	cout << sum << endl;
}