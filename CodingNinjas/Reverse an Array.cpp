// CN: https://www.codingninjas.com/studio/problems/reverse-an-array_8365444

#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(int i, int n, vector<int> &nums){
    if(i>=n/2)
        return nums;
    swap(nums[i],nums[n-i-1]);
    return reverse(i+1,n,nums);
    
}
vector<int> reverseArray(int n, vector<int> &nums) {
    reverse(0,n,nums);
    return nums;
}
