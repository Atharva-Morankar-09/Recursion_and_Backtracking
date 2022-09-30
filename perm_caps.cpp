

#include<bits/stdc++.h>
using namespace std;

void rec(int i, string s, string ans)
{
    if(i==s.size())
    {
        cout<<ans<<" ";
        return ;
    }
    
    rec(i+1,s,ans+s[i]);
    ans+=toupper(s[i]);
    rec(i+1,s,ans);
}

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    string ans="";
    //cout<<ans;
    rec(0,s,ans);
    return 0;
}