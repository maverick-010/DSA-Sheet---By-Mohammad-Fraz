#include<bits/stdc++.h>
void solve(string str,vector<string>&ans,int index){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[i],str[index]);
        solve(str,ans,index+1);
        swap(str[i],str[index]);
    }
}
vector<string> generatePermutations(string &str)
{
    vector<string>ans;
    int index=0;
    solve(str,ans,index);
    sort(ans.begin(),ans.end());
    return ans;
}
