#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int n;cin>>n;
        int arrp[n];
        int sum =0;

        for (int i = 0; i < n; i++)
        {
            cin>>arrp[i];
            sum+=abs(arrp[i]);
        }

        cout<<sum<<endl;
        
    }
    
     

    return 0;
}