// G4G: https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=(n-i); j++)
                cout << " ";
            
            for(int j=1; j<=i; j++)
                cout << (char)(64+j);
                
            for(int j=i-1; j>=1; j--)
                cout << (char)(64+j);
            
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