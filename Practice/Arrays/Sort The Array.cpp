/*
G4G: https://practice.geeksforgeeks.org/problems/sort-the-array0055/1
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int partition(vector<int> &arr, int start, int end)
    {
        int pivot = arr[start];
     
        int count = 0;
        for (int i = start + 1; i <= end; i++) {
            if (arr[i] <= pivot)
                count++;
        }
     
        // Giving pivot element its correct position
        int pivotIndex = start + count;
        swap(arr[pivotIndex], arr[start]);
     
        // Sorting left and right parts of the pivot element
        int i = start, j = end;
     
        while (i < pivotIndex && j > pivotIndex) {
     
            while (arr[i] <= pivot) {
                i++;
            }
     
            while (arr[j] > pivot) {
                j--;
            }
     
            if (i < pivotIndex && j > pivotIndex) {
                swap(arr[i++], arr[j--]);
            }
        }
     
        return pivotIndex;
    }
    void quickSort(vector<int> &arr, int start, int end){
        if (start >= end)
        return;
 
        // partitioning the array
        int p = partition(arr, start, end);
     
        // Sorting the left part
        quickSort(arr, start, p - 1);
     
        // Sorting the right part
        quickSort(arr, p + 1, end);
    }
    vector<int> sortArr(vector<int>arr, int n){
        //complete the function here
        quickSort(arr, 0, n-1);
        return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends