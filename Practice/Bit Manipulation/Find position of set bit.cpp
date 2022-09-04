/*
https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int res = 0, i = 1, c=0;
        if(N == 0)
            return -1;
        
        while(N){
            if(N & i == 1){
                c += 1;
            }
            N = N >> 1;
            res += 1;
        }
        
        if(c>1)
            return -1;
        else
            return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends