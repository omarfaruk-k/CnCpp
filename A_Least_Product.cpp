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

        int cntMin = 0;
        int cntPLS = 0;
        int cnt0 = 0;


        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]>0) cntPLS++;
            else if(arr[i]<0) cntMin++;
            else if(arr[i]==0) cnt0++;

        }
//cout<<cntMin<<" "<<cntPLS<<" "<<cnt0<<endl;

        if(cnt0!=0) cout<<0<<endl;
        else if(cntMin%2==0) cout<<1<<endl<<1<<" "<<0<<endl;
        else if(cntMin%2!=0) cout<<0<<endl;
        else if((cntPLS%2==0) || (cntPLS==1 && n==1)) cout<<1<<endl<<1<<" "<<0<<endl;
        
        
    }
    
     

    return 0;
}