
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string s, s1;
    cin>>s;
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != s[i+1])
         {
           count++;
         }
    }
    if(count%2 == 1)
    {
        cout << "IGNORE HIM!" << "\n";
    }
    else
    {
        cout << "CHAT WITH HER!" << "\n";
    }

}

