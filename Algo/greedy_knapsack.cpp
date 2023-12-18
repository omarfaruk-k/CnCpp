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

    vec selected;       //vector to store selected element

    while (m > 0)       //loop will work till there is some remaining weight
    {
        if (m>=weight[i]){      //checking if remaining weight is lesser or equal to the object
            m-=weight[pbw[i].second];       //decresign the remaining weight
            prof += profit[pbw[i].second];  //increasing the profijt
        }

        else{
            ld b = m/weight[pbw[i].second];     //if remaining profit is lower, we have to work for fractional value
            m -= weight[pbw[i].second];
            prof += b * profit[pbw[i].second];
        }
        selected.pb(pbw[i].second);     //for both casses, storing the selected objects index
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
    cin >> tc;      //test case input

    while (tc--)
    {
        int n, m;
        cout<<"Input number of objects and the weight of knapsack: ";
        cin >>n>>m;

        cout<<"Input the profits of the objects: ";

        ld profit[n];
        for (int i = 0; i<n; i++)
            cin>>profit[i];

        cout<<"Input the weights of objects: ";

        ld weight[n];
        for (int i = 0; i<n; i++)
            cin>>weight[i];



        vector<pair<ld, int>> pbw;      //vector pair, here we will store profit by weight ans its index

        for (int i = 0; i < n; i++)
        {
            ld a;
            a = profit[i] / weight[i];
            pbw.pb({a, i});             //pushing pair of profit by weight ans its original index value
        }

        sort(pbw.begin(), pbw.end(), greater<pair<ld, int>>());     //sorting this vector pair based on the first element profit by weight
        knapsack(m,weight,profit,pbw);          //calling the knapsack funciton
    }

    return 0;
}
