bool solve(int l,int r,string &s){
    if(l>=r)return 1;
    if(s[l]!=s[r])return 0;
    return solve(l+1,r-1,s);
}
bool isPalindrome(string &s)
{
	return solve(0,s.size()-1,s);
}
