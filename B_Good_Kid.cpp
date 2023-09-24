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
    int tc;cin>>tc;

    while (tc--)
    {
        int n;cin>>n;
        int arr[n];
        int ans;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        arr[0]++;
        ans=arr[0];
        for (int i = 1; i < n; i++)
        {
            ans*=arr[i];
        }
        cout<<ans<<endl;
    }
    
     

    return 0;
}