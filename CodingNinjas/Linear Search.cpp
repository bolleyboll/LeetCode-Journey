// CN: https://www.codingninjas.com/studio/problems/linear-search_6922070

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{
    int res=-1;
    for(int i=0;i<arr.size(); i++){
        if(arr[i]==num){
            res=i;
            break;
        }
    }
    return res;
}
