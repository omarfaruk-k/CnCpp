#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<int> vp;

int32_t main(){
    int tc;
    cin >> tc;

    while (tc--) {
        int khushite,thelay,ghurte;
        int jugfol1, jugfol_Ashol = 0;
        cin>>khushite>>thelay>>ghurte;
        bool ans = 1;

        jugfol_Ashol = (khushite*(khushite+1))/2;

        khushite -= thelay;

        jugfol1 = (khushite*(khushite+1))/2;

        jugfol_Ashol -= jugfol1;

        jugfol1 = (thelay*(thelay+1))/2;

        if (ghurte >= jugfol1 && ghurte <= jugfol_Ashol) {
            cout<<"YES"<<endl;
        }

        else  cout<<"NO"<<endl;
    }

    return 0;
}
