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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int ans = arr[0]-1;

        for (int i = 1; i < n; i++)
        {
            if(arr[i]>arr[i-1]) ans+= (arr[i]-arr[i-1]);
        }
        
        cout<<ans<<endl;

            
        
        
    }
    
     

    return 0;
}