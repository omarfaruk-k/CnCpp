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
        int n,p;
        cin>>n>>p;
        int arr[n];

        int pro = 1;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            pro*=arr[i];
        }


        if(2023%pro==0){
            cout<<"YES"<<endl;
            cout<<2023/pro<<" ";
            for (int i = 1; i < p; i++)
            {
                cout<<1<<" ";
            }cout<<endl;
            
            }
        else cout<<"NO"<<endl;

        
    }
    
     

    return 0;
}