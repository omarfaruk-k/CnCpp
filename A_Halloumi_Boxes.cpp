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
        int n,k;cin>>n>>k;

        int cnt=0;
        int arr[n];
        int mx=0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

;
        for (int i = 1; i < n; i++)
        {
            if(arr[i-1]>arr[i]) {
                cnt++;
                break;
            }

        }
        

        if(k==1 && cnt==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
     

    return 0;
}