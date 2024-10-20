
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int row;
        cin>>row;
        vector<string>s(row);
        for(int i=0; i<=row-1; i++)
        {
                cin>>s[i];
        }
        for(int i=row-1; i>=0; i--)
        {
            for(int j=0; j<4; j++)
            {
                if(s[i][j] == '#')
                    {
                        cout<<(j+1)<< " ";
                        break;
                    }
            }
        }
        cout<<endl;
    }
}
