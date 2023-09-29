// CN: https://www.codingninjas.com/studio/problems/-print-n-times_8380707

#include <bits/stdc++.h>
using namespace std;
vector<string> printNTimes(int n) {
	vector<string> res;
    if(n<=1)
        return {"Coding Ninjas"};
    else{
        res = printNTimes(n-1);
        res.push_back("Coding Ninjas");
        return res;
    }
}