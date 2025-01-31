#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, Anton =0, Danik = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A')
            {
                Anton++;//break;
            }

        if(s[i]== 'D')
            {
                Danik++;//break;
            }
    }
  if(Anton < Danik)
    {
        cout<< "Danik";
    }
   else if(Danik < Anton)
        {
            cout<< "Anton";
        }
    else if(Anton == Danik)
    {
        cout<< "Friendship";
    }
}
