#include<bits/stdc++.h>
// conversion of uppercase character to lowercase character 
char tolowercase(char ch){
    if(ch>='a' && ch<='z' || (ch>=0 && ch<=9 ))
        return ch;
    else{
        ch=ch-'A'+'a';
        return ch;
    }
}

bool checkPalindrome(string s)
{
      int i=0,j=s.length()-1;
    while(i<=j){
        if(isalnum(s[i])==0)
            i++;
        else if(isalnum(s[j])==0)
            j--;
        else if(tolowercase(s[i])!=tolowercase(s[j]))
            return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
