#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        bool flg = false;
       int n;
       cin>>n;
        vector<int>a(n);
       for(int i=0; i<n; i++)
       {
        cin>>a[i];
       }
       vector<int>v1(a);
    sort(v1.begin(), v1.end());


       if(v1 == a)
       {
           cout<< "YES\n";
       }
       else
       {
           for(int i=0; i<=n; i++)  //1 3 2 5 4
       {
           for(int j = i+1; j<=n-1; j++)
           {
               if((a[j-1]<a[j] )&&(a[j+1] <a[j]))
                {
                    swap(a[j], a[j+1]);
                }

           }

       }
    for(int i=0; i<n; i++)
    {
        cout<< a[i] << " ";
    }

             if(v1 == a)
                    {
                        flg = true;
                   }
                else
                {
                    flg = false;
                }

     if(flg == true)
     {
         cout<< "YES\n";
     }
     else{
        cout<< "NO\n";
     }
       }
    }
}

