#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int small =0, capital =0;
    for(int i=0; i<s.size(); i++)
    {
        if((s[i] >= 'a')&&(s[i]<='z'))
           {
                small++;
           }
     else if((s[i] >= 'A')&&(s[i]<='Z'))
            {
                capital++;
            }
    }
    for(int i=0; i<s.size(); i++)
      {
          if(small>=capital)
                {
                    if((s[i] >= 'A')&&(s[i]<='Z'))
                      {
                          s[i] = s[i]+32;
                      }
               }
        else if(capital > small)
        {
            if((s[i] >= 'a')&&(s[i]<='z'))
              {
                   s[i] = s[i] -32;
              }
       }
       cout << s[i];
      }
return 0;
}
