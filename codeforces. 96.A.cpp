#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int abs = 0;
    for(int i=0; i<s.size(); i++)
    {
        int count = 0;
        if(s[i] == '0')
        {
            while(s[i] == '0' && i<s.size())
            {
                count++;
                i++;
            }
        }
        else
        {
            while(s[i] == '1' && i<s.size())
            {
                count++;
                i++;
            }
        }
        if(count>=7)
        {
            abs = 1;

        }
         i--;
    }
    if(abs == 1)
    { cout<<"YES"<< endl; }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
