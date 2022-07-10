
#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>& v, int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return ;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}

void sortA(vector<int>& v)
{
    if(v.size()==1)
    {
        return ;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    sortA(v);
    insert(v,temp);
}

int main()
{
    int n;
    vector<int> v={7,2,4,8,1,3};
    
    sortA(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}