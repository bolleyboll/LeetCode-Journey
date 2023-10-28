vector<int> rotateArray(vector<int>nums, int k) {
    int n = nums.size();
  	k = k % n;
  	reverse(nums.begin(), nums.end() - (n-k));
  	reverse(nums.begin() + k, nums.end());
  	reverse(nums.begin(), nums.end());
    return nums;
}
