int removeDuplicates(vector<int> &arr, int n) {
	int res=arr.size();
	for(int i=1; i<arr.size(); i++){
		if(arr[i-1]==arr[i])
			res--;
	}
	return res;
}
