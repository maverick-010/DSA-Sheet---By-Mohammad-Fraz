vector<int> completeSum(vector<int> &a, int n) {
    vector<int>v;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        v.push_back(sum);
    }
    return v;
}
