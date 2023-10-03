// CN: https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382


#include<bits/stdc++.h>
using namespace std;
vector<int> getFrequencies(vector<int>& v) {
    map<int, int> hash;
    vector<int> res;

    for(auto it: v){
        hash[it]++;
    }

    int val=INT_MIN;
    int key;
    for(auto it: hash){
        if(it.second > val){
            val = it.second;
            key = it.first;
        }
    }
    res.push_back(key);

    val=INT_MAX;
    for(auto it: hash){
        if(it.second < val){
            val = it.second;
            key = it.first;
        }
    }
    res.push_back(key);

    return res;
}