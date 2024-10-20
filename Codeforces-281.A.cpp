#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[1000];
   cin>>c;
   //cout<< c[0];

       if(c[0] >= 'a' && c[0] <= 'z')
     {
        c[0] = c[0] - 32;
     }

   cout<< c;
}
