int removeDuplicates(vector<int> &arr, int n) {
	int newInd=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            newInd++;
        }
    }
    return newInd+1;
}
