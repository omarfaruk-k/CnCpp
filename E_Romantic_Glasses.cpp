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
        int od=0;
        int ev=0;
        int n;cin>>n;
        int arr[n+1];

        bool key = false;


        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i%2==0) ev+=arr[i];
            else od+=arr[i];

            if(od==ev) key = true;

        }

        if(key) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
     

    return 0;
}