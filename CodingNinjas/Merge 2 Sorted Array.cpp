// CN: https://www.codingninjas.com/studio/problems/sorted-array_6613259

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b){

	int n = a.size();
	int m = b.size();
	vector<int> res;
	int i = 0, j = 0, k = -1;
	while (i < n && j < m)
	{
		if (a[i] < b[j])
		{
			res.push_back(a[i]);
			i++;
			k++;
			if (k > 0 && res[k] == res[k - 1])
			{
				res.pop_back();
				k--;
			}
		}
		else
		{
			res.push_back(b[j]);
			j++;
			k++;
			if (k > 0 && res[k] == res[k - 1])
			{
				res.pop_back();
				k--;
			}
		}
	}
	while (i < n)
	{
		res.push_back(a[i]);
		i++;
		k++;
		if (k > 0 && res[k] == res[k - 1])
		{
			res.pop_back();
			k--;
		}
	}
	while (j < m)
	{
		res.push_back(b[j]);
		j++;
		k++;
		if (k > 0 && res[k] == res[k - 1])
		{
			res.pop_back();
			k--;
		}
	}
	return res;
}