/*
https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;

	cin >> n;
	
	int arr[n];

	for (long long i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}

	for (long long i = 0; i < n-1; i++) {
        if(abs(arr[i]) - 1 == n-1){
          continue;
        }
        int ind = abs(arr[i]) - 1;
        arr[ind] *= -1;
    }
 
 
    int ans = n;
    for (long long i = 0; i < n-1; i++) {
        if (arr[i] > 0)
            ans = i + 1;
    }
    cout << ans;
}