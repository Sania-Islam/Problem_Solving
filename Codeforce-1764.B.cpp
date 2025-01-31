/*#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        set<int> s(a.begin(), a.end());  // Initialize set with the current elements

        vector<int> elements(a.begin(), a.end());  // Copy the original array

        for (int i = elements.size()-1; i>0; --i) {
            for (int j = 0; j < i; ++j) {
                int diff = elements[i] - elements[j];
                // Add diff to set if it's not already in the set
                if (s.find(diff) == s.end()) {
                    s.insert(diff);
                    elements.push_back(diff);  // Add to the vector to process more pairs
                }
            }
        }

        // Output the final size of the set
        cout << s.size() << "\n";
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int x= *max_element(a.begin(), a.end());
        int y = *min_element(a.begin(), a.end());

        int rslt = gcd(y, x);

        //cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
        cout<< x/rslt << "\n";
    }
    return 0;
}
