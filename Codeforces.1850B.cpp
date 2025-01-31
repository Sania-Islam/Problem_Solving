#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v1;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
       vector<int>v1(n);
        for(int i=1; i<=n; i++)
        {
            int a, b;
            cin>>a>>b;
            v.push_back(a);
            v1.push_back(b);

        }
   auto mx = max_element(v1.begin(), v1.end());
     for(int i=0; i<v.size(); i++)
     {
         cout<< v[i] << " ";
     } cout<< endl;
     for(int i=0; i<v1.size(); i++)
     {
         cout<< v1[i] << " ";
     } cout<< endl;
    for(int i=0; i<v1.size(); i++)
        {
            if((v[i] < 11)&& (v1[i] == *mx))
            {

                  cout<< i +1 << endl;//
            }
         }

     v.erase(v.begin(), v.end());
      v1.erase(v1.begin(), v1.end());
      for(int i=0; i<v1.size(); i++)
     {
         cout<< v1[i] << " ";
     } cout<< endl;
}
}
