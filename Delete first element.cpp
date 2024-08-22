
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Total number of value: ";
    cin>>n;
    int a[n];
    cout << "Inserted array is: ";
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    //for deleting first position;
    for(int i=0; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    cout<< "After deleting first element: ";
   for(int i=0; i<n-1; i++)
    {
        cout<<a[i]<< " ";
    }
}
