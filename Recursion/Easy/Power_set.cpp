void solve(vector<int>&v,int i,vector<int>&sub,vector<vector<int>>&ans){
    if(i==v.size()){
        ans.push_back(sub);
        return;
    }
    sub.push_back(v[i]);
    solve(v,i+1,sub,ans);
    sub.pop_back();
    solve(v,i+1,sub,ans);
}
vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>>ans;
    vector<int>sub;
    solve(v,0,sub,ans);
    return ans;
}
