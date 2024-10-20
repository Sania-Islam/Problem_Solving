
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, sum =0;
    int exist = 0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        int total = k*i;
        sum += total;
    }
    if(sum > n)
    {
        exist = sum - n;
    }
    cout << exist;
}
