#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1)
        return 1;
    return n*fact(n-1);
}
vector<long long> factorialNumbers(long long n) {
    vector<long long> res;
    long long c=1,t=1;
    while(t*c<=n){
        t*=c;
        c++;
        res.push_back(t);
    }
    return res;
}