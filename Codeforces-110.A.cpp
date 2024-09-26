
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long c, count = 0;
   cin>>c;
   while(c > 0)
   {

       if((c%10 == 4)||(c%10 == 7))
       {
           count ++;
       }
       c = c/10;
   }
   if(count == 4 || count == 7)
   {
       cout<< "YES\n";
   }
   else
   {
       cout << "NO\n";
   }
}

