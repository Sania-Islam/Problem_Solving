#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    int episode[n-1];
    for(int i=0; i<n-1; i++)
    {
        cin>>episode[i];
        count+=episode[i];
    }
    int sum = (n*(n+1))/2;
    int exist = sum - count;
    cout<<exist<< "\n";

}
