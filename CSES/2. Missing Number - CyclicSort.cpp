/*
https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;

	cin >> n;

	long long arr[n];

	for (long long i = 0; i < n; i++)
	{
		arr[i] = 0;
	}

	for (long long i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}

	long long i = 0;
    while (i < n-1) {
        long long index = arr[i] - 1;
        if (arr[i] != arr[index]) {
            swap(arr[i], arr[index]);
        }
        else {
            i++;
        }
    }

    for (long long i = 0; i < n; i++) {
        if (i != arr[i] - 1) {
            cout << (i + 1);
        }
    }
}