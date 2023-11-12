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




void knapsack( int m, ld weight[], ld profit[], vector<pair<ld,int>> pbw)
{

    int i = 0;
    ld prof = 0;

    vec selected;

    while (m > 0)
    {
        if (m >= weight[i])
        {
            m -= weight[pbw[i].second];
            prof += profit[pbw[i].second];
        }
        else
        {
            ld b = m / weight[pbw[i].second];
            m -= weight[pbw[i].second];
            prof += b * profit[pbw[i].second];
        }
        selected.pb(pbw[i].second);
        i++;

    }

    sort(selected.begin(),selected.end());
    cout<<"Maximum Profit: "<< prof << endl;
    cout<<"Selected Objects are: ";
    for(auto i:selected) cout<<i+1<<" ";
    cout<<endl;

}

int32_t main()
{
    cout << "Enter test case: ";
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, m;
        cout << "Input number of objects and the weight of knapsack: ";
        cin >> n >> m;

        cout << "Input the profits of the objects: ";

        ld profit[n];
        for (int i = 0; i < n; i++)
            cin >> profit[i];

        cout << "Input the weights of objects: ";

        ld weight[n];
        for (int i = 0; i < n; i++)
            cin >> weight[i];



        vector<pair<ld, int>> pbw;

        for (int i = 0; i < n; i++)
        {
            ld a;
            a = profit[i] / weight[i];
            pbw.pb({a, i});
        }

        sort(pbw.begin(), pbw.end(), greater<pair<ld, int>>());
        knapsack(m,weight,profit,pbw);
    }

    return 0;
}
