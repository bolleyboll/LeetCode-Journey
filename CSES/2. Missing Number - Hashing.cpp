/*
https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;

	cin >> n;
	
	int arr[n], temp[n + 1];

	for (long long i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}

	for (long long i = 0; i < n + 1; i++)
	{
		temp[i] = 0;
	}

	for (long long i = 0; i < n - 1; i++)
	{
		if (temp[arr[i]] == 0)
		{
			temp[arr[i]] = 1;
		}
	}

	for (long long i = 1; i < n + 1; i++)
	{
		if (temp[i] == 0)
		{
			cout << i;
		}
	}
}