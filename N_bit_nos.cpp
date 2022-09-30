
#include<bits/stdc++.h>
using namespace std;

void rec(string ans, int cnt1, int cnt0, int n)
{
    if(cnt0>cnt1)
    {
        return ;
    }
    if(cnt1+cnt0==n)
    {
       cout<<ans<<" ";
       return ; 
    }

    rec(ans+"1",cnt1+1,cnt0,n);
    rec(ans+"0",cnt1,cnt0+1,n);
    
}

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    string ans="1";
    int cnt1=1,cnt0=0;
    rec(ans,cnt1,cnt0,n);
    return 0;
}