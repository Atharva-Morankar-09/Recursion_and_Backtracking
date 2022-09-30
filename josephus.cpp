
#include<bits/stdc++.h>
using namespace std;

void rec(vector<int> v, int k, int idx)
{
    if(v.size()==1)
    {
        cout<<"Ans is : "<<v[0];
        return ;
    }
    idx = (idx + k)%v.size();
    v.erase(v.begin()+idx);
    rec(v, k, idx);
}

int main()
{
    int n,k;
    cout<<"Enter total number : ";
    cin>>n;
    cout<<"Enter k : ";
    cin>>k;
    k-=1;
    vector<int> v(n);
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        v[i]=cnt;
        cnt++;
    }
    rec(v,k,0);
    return 0;
}