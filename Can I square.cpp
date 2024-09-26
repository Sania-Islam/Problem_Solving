
#include <bits/stdc++.h>
using namespace std;

bool isBeautifulMatrix(const string& s, int r) {

    int idx = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r; ++j) {
            if (i == 0 || i == r - 1 || j == 0 || j == r - 1) {
                if (s[idx] != '1') return false;
            } else {
                if (s[idx] != '0') return false;
            }
            ++idx;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int r = sqrt(n);
        if (r * r != n) {
            cout << "No\n";
        } else {

            if (isBeautifulMatrix(s, r)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(string s, int r)
{

    int index = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(i==0 || i== r-1|| j==0|| j==r-1)
            {
                if(s[index] != '1')
                    return false;
            }
            else
                {
                    if( s[index] != '0')
                    return false;
                }
            index++;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;

        int r = sqrt(n);
        if(r*r != n)
        {
            cout<< "No\n";
        }
        else{
                 // Check if it's a beautiful matrix
            if(isBeautiful(s, r))
            {
                cout<< "Yes\n";
            }
            else{
                cout<< "No\n";
            }
        }
    }
    return 0;
}
