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
        int sum =0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];

        }

        int cnt = 0;

        if(sum%3==0) cout<<0<<endl;
        else if((sum+1)%3==0) cout<<1<<endl;
        else {
            
            for (int i = 0; i < n; i++)
            {
                if((sum-arr[i])%3==0){
                    cout<<1<<endl;
                    cnt = 1;
                    break;
                }
            }
            if(cnt==0) cout<<2<<endl;
        }

        
        
    }
    
     

    return 0;
}