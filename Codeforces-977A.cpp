#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    while (k--)
    {
        int remain = n%10;
        if(remain >0)
            n -=1;
        else if(remain == 0)
            n = n/10;
    }
    cout << n;

}
