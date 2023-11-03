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
        int v[3];
        int ans=0;
        for (int i = 0; i < 3; i++)
        {
            cin>>v[i];
        }

        sort(v,v+3);

        if(v[0]==v[1] && v[1]==v[2]) cout<<0<<endl;

        else if(v[0]==v[1] && v[0]!=v[2]) {

            if(v[0]>v[2]) v[2]++;
            else v[2]--;
            ans=abs(v[1]-v[2])*2;
            cout<<ans<<endl;
        } 

        else if(v[1]==v[2] && v[2]!=v[0]){

            if(v[2]>v[0]) v[0]++;
            else v[0]--;
            ans=abs(v[0]-v[2])*2;
            cout<<ans<<endl;
        }

        else{
            v[0]++;
            v[2]--;
            ans= abs(v[0]-v[1])+abs(v[0]-v[2])+abs(v[2]-v[1]);
            cout<<ans<<endl;
        }
        
    }
    
     

    return 0;
}