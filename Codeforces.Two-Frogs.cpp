#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, C=0;
    cin>>t;
    while(t--)
    {
         int L, A, B;
         cin>>L>> A>>B;
         int dist = abs(A-B)-1;
         if(dist%2 == 1)
         {
             cout<< "YES\n";
         }
         else
         {
             cout<< "NO\n";
         }
    }

}
