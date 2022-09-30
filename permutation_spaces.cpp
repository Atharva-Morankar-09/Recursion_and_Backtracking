
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
    rec(i+1,s,ans+"_"+s[i]);
}

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    
    string ans="";
    ans+=s[0];
    //cout<<ans;
    rec(1,s,ans);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// void solve(string in,string op)
// {
// 	if(in.size()==0)
// 	{
// 		cout<<op<<" ";
// 		return;
// 	}
// 	string op1=op+"_"+in[0];
// 	string op2=op+in[0];
// 	in.erase(in.begin()+0);
// 	solve(in,op1);
// 	solve(in,op2);
// }
// int main()
// {
// 	string s;
// 	cin>>s;
// 	string op="";
// 	op=op+s[0];
// 	s.erase(s.begin()+0);
// 	solve(s,op);
// 	return 0;
// }