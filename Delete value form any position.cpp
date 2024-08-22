
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos, value;
    cout<< "The number of value : ";
    cin>>n;
    cout << "Inserted array is: ";
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    cout<< "Which position: ";
    cin>>pos;
    //int position = pos+1;
    for(int i =pos-1; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    cout<< "After deleting the value from selected position : ";
    for(int i = 0; i<n-1; i++)
    {
        cout<<a[i]<< " ";
    }
}
