int getSecondLargest(vector<int> a){
    int largest = INT_MIN;
    int res = largest-1;
    for(auto it: a){
        if(it > largest){
            res = largest;
            largest = it;
        } else if (it < largest && it > res){
            res = it;
        }
    }
    return res;
}
int getSecondSmallest(vector<int> a){
    int smallest = INT_MAX;
    int res = smallest-1;
    for(auto it: a){
        if(it < smallest){
            res = smallest;
            smallest = it;
        } else if (it > smallest && it < res){
            res = it;
        }
    }
    return res;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest=getSecondLargest(a);
    int sSmallest=getSecondSmallest(a);
    return {sLargest, sSmallest};
}
