#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int> vec;
typedef pair<int, int> pr;
typedef vector<pr> vecpair;

int32_t main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, a;
        cin >> n >> a;
        vec v;

        if (a != 0)
        {
            v.pb(n);
            int k = 1;
            a--;

            while (a--)
            {
                n -= k;
                v.pb(n);
                // k++;
            }

            for (int i = 1; i < n; i++)
            {
                v.pb(i);
                // n+=i;
            }

        }

        else
        {       
            for (int i = 1; i <= n; i++)
            {
                v.pb(i);
            }
            
        }



        
        reverse(v.begin(),v.end());
        
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;
        
    }

    return 0;
}