// CN: https://www.codingninjas.com/studio/problems/print-1-to-n_628290

#include <bits/stdc++.h>
using namespace std;
vector<int> printNos(int x) {
    vector<int> res;
    if(x<=1)
        return {x};
    else{
        res = printNos(x-1);
        res.push_back(x);
        return res;
    }
}