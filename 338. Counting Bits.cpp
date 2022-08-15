/*
https://leetcode.com/problems/counting-bits/
*/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        
        for(int i=0; i<=n; i++){
            int c=0;
            int a=i;
            while(a){
                if(a%2==1)
                    c++;
                a/=2;
            }
            res.push_back(c);
        }
        return res;
    }
};