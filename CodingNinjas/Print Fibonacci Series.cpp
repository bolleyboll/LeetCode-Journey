// CN: https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617
#include <bits/stdc++.h>
using namespace std;
vector<int> generateFibonacciNumbers(int n) {
    vector<int> v;
    v = {0,1};

    if (n == 0) {
        v.clear();
        return v;
    } else if (n==1) {
        v.pop_back();
        return v;
    } else if (n==2)
        return v;
    
    int i=1;
    while(i<n-1){
        v.push_back(v[i-1]+v[i]);
        i++;
    }

    return v;
}