#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x, y, s3;
   // cin>>x>>y;

    while(t--)
    {
        cin>>x>>y;
        int s1 = x, s2 = y, s3=0;
        s2-=x;
        s2+=y;
        if(s2>s3)
        {
            s3 = s2;
        }
    }
    cout<< s3;
}
