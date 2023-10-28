vector<int> moveZeros(int n, vector<int> a) {
    int c=0;
    vector<int> res;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            c++;
        } else {
            res.push_back(a[i]);
        }
    }
    while(c--){
        res.push_back(0);
    }
    return res;
}
