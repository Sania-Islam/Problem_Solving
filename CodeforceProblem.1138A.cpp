#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, C1= 0, C2 = 0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
         if(a[i] ==  1)
           {
               C1++;
               //break;
           }
           else
           {
              break;
           }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] ==  2)
           {
               C2++;
              // break;
           }
           else
           {
               break;
           }

    }
    cout<< C1 << " " <<C2<<endl;
    if(C1 <= C2)
    {
        cout<< C1+C1;
    }
    else if(C2 < C1)
    {
        cout<< C2+C2;
    }

}
