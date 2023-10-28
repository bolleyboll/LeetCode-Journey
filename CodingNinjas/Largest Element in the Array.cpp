#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int largest=INT_MIN;
    for(auto it: arr){
        if(it>largest)
            largest=it;
    }
    return largest;
}
