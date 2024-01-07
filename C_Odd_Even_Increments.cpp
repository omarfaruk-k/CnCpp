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
        int arr[n+1];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int ans = 0;
        int odd_e_ki = arr[1]%2;
        int even_e_ki = arr[0]%2;

        for (int i = 0; i < n; i+=2)
        {
            if(arr[i]%2 != even_e_ki){
                ans = 1;
                break;
            }
        }

        if(!ans){
        for (int i = 1; i < n; i+=2)
        {
            if(arr[i]%2 != odd_e_ki){
                ans = 1;
                break;
            }
        }
        }
        
        if(!ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
     

    return 0;
}