#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, m;
    cin>>x>>y>>z>>m;
    int a, b, c;
    int maximum = max({x, y, z, m});
    //cout<< maximum;
    if(maximum == x)
    {
        c = x-y;
        b = x-z;
        a = x-m;
    }
    else if(maximum == y)
    {
        c = y-x;
        b = y-z;
        a = y-m;
    }
    else if(maximum == z)
    {
        c = z-x;
        b = z-y;
        a = z-m;
    }
    else
    {
        c = m-x;
        b = m-y;
        a = m-z;
    }
    cout << a <<" "<<b<< " "<<c << "\n";
}
