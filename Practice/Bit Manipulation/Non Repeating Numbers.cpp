/*
https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> res;
        int fullXOR = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            fullXOR = fullXOR ^ nums[i];
        }
        
        int LSO = fullXOR & ~(fullXOR-1);
        int x, y;

        x=y=0;
        
        for(auto i: nums){
            if(LSO & i)
                x = x ^ i;
            else
                y = y ^ i;
        }
        
        if(x<y){
            res.push_back(x);
            res.push_back(y);
        } else {
            res.push_back(y);
            res.push_back(x);
        }

        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends        return res;

