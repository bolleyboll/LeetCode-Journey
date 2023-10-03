// CN: https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243

#include <bits/stdc++.h>
using namespace std;
void recursion(vector<int> &v, int x){
    if(x==0)
        return;
    else {
        v.push_back(x);
        recursion(v, x - 1);
    }
}
vector<int> printNos(int x) {
    vector<int> v;
    recursion(v, x);
    return v;
}