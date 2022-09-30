
#include<bits/stdc++.h>
using namespace std;

void rec(int open, int close, string ans)
{
    if(open==0 && close==0)
    {
        cout<<ans<<endl;
        return ;
    }

    if(open!=0)
    {
        rec(open-1,close,ans+"(");
    }
    if(close>open)
    {
        rec(open,close-1,ans+")");
    }
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int open=n,close=n;
    string ans="";
    rec(open,close,ans);
    return 0;
}