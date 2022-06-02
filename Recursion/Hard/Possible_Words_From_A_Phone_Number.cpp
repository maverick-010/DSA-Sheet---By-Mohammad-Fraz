#include<bits/stdc++.h>
void solve(string s,vector<string>&ans,string output,int index,string mapping[10]){
      if(index>=s.length()){
       ans.push_back(output);
       return;
   }
   int number=s[index]-'0';

   string x=mapping[number];

   for(int i=0;i<x.length();i++){
       output.push_back(x[i]);
       solve(s,ans,output,index+1,mapping);
       output.pop_back();
   }
}
vector<string> findPossibleWords(string s)
{
	 vector<string>ans;
   string output="";
   string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

   int index=0;

  solve(s,ans,output,index,mapping);

   return ans;
}
