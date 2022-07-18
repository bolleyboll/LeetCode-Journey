/*
LC: https://leetcode.com/problems/find-peak-element/
*/
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int left = 0;
        int n = arr.size();
        int right = n - 1;
        while(left < right){
          int mid = left + (right - left)/2;               
          if(arr[mid] < arr[mid + 1]){
              left = mid + 1;
          }else{
              right = mid;
          }
        }
        return left;
    }
};