// G4G: https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0; i<n; i++){
            int k = i%2==0?1:0;
            for(int j=0; j<=i; j++){
                cout << k << " ";
                k = k==0?1:0;
            }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends