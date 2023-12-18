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
        char arr[n];
        int c0=0, c1=0;
        
        int ans=0;


        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i] == '0') c0++;
            else c1++;
        }

        //if(c0>c1) ans=1;
        
        if(c0 <=  c1){
            for (int i = 0; i < n-1; i++)
            {
                if(arr[i] != arr[i+1]){
                    ans=1;break;
                }
            }
            
        }
        else ans=1;


        if(ans==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
     

    return 0;
}