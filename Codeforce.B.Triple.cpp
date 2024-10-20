#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, count =0, s =0;
        cin>>n;
        vector<int>a(n);
        unordered_map<int, int> freq;
        bool found = false;

        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
            freq[a[i]]++;
        }

        for(int i=0; i<n; ++i)
        {
           if(freq[a[i]] >= 3)
            {
                cout << a[i]<<"\n";
                found = true;
                break;
            }
        }
        if(!found)
        {
               cout<< "-1"<< "\n";
        }


    }
}
