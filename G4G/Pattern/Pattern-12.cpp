// G4G: https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++)
                cout << j << " ";
            
            for(int j=1; j<=(n-i); j++)
                cout << "   ";
                
            for(int j=1; j<=(n-i); j++)
                cout << " ";
            
            for(int j=i; j>=1; j--)
                cout << j << " ";
                
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