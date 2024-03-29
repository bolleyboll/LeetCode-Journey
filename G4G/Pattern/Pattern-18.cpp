// G4G: https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1; i<=n; i++){
            for(int j=n; j>(n-i); j--)
                cout << (char)(64+j) << " ";
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