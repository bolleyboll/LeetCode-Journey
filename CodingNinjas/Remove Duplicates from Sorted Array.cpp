// CN: https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307

// int removeDuplicates(vector<int> &arr, int n) {
// 	int res=arr.size();
// 	for(int i=1; i<arr.size(); i++){
// 		if(arr[i-1]==arr[i])
// 			res--;
// 	}
// 	return res;
// }
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n)
{
	int i = 0;
	for (int j = 1; j < n; j++)
	{
		if (arr[i] != arr[j])
		{
			i++;
			arr[i] = arr[j];
		}
	}
	return i + 1;
}