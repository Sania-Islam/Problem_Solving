
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, sum =0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
       }

         for(int i=0; i<n; i++)
         {
             if(i%2 == 0)
               sum+=a[i];
          else
              sum-= a[i];
         }
        cout << sum<<endl;
    }
}
