#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;
        int Max = max(a, b);
        int Min = min(a, b);
        cout<< Min<< " "<<Max<<endl;
    }

}
