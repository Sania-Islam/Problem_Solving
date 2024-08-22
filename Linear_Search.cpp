#include<bits/stdc++.h>
using namespace std;
void linearSearch(int a[], int n, int key)
{
    int i;
    bool flag = false;
    int index;
    for(int i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            flag = true;
            index=i;
            break;
        }
      else
        {
             flag = false;
        }
    }
    if(flag == true)
    {
        cout<< "Value found in position "<< index+1;

    }
    else
    {
        cout << "Not found";
    }

}
int main()
{
    int n, key;
    cin>>n;
    int a[n];
    //take an array as input
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    cout << "Enter the value which need to search: ";
    cin>>key;
    linearSearch(a, n,key);
}
