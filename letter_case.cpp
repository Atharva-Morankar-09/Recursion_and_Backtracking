
#include <bits/stdc++.h>
using namespace std;

void rec(int i, string s, string ans)
{
    if (i == s.size())
    {
        cout << ans << " ";
        return ;
    }
    if (isalpha(s[i]))
    {
        ans += tolower(s[i]);
        rec(i + 1, s, ans);
        ans[i] = toupper(s[i]);
        rec(i + 1, s, ans);
    }
    else
    {
        ans += s[i];
        rec(i + 1, s, ans);
    }    
}

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    string ans = "";
    rec(0, s, ans);
    return 0;
}