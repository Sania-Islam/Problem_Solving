
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<< "The number of value : ";
    cin>>n;
    cout << "Inserted array is: ";
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    //for deleting last position;
    cout << "After deleting last element: ";
    for(int i=0; i<n-1; i++)
    {
        cout<<a[i]<< " ";
    }
}
