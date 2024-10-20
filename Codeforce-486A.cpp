#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, f=0, f1=0;
    cin>>n;
    if(n %2 == 0)
    {
        f -= (n/2)*(n/2);
    }
    else
    {
        f -= (n/2+1)*(n/2+1);
    }
    f1 += (n/2)*(n/2+1);

    cout<< f + f1<< "\n";
}
