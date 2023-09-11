#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll tc;cin>>tc;
    while (tc--)
    {
        ll cnt_for_one=0,sum=0,a,cnt=0,other_tot=0;
        cin>>a;
        while (a--)
        {
            ll b;
            cin>>b;
            sum+=b;
            cnt++;
            if(b==1) cnt_for_one++;
            else other_tot++;

        }


        // float hulf=sum/2;
        // float other_hulf=other_tot/2;

        if (cnt==1){
            cout<<"NO"<<endl;
        }
        else if((cnt_for_one*2)+other_tot>sum) cout<<"NO"<<endl;
        // else if (hulf<=cnt_for_one)
        // {
        //     cout<<"NO"<<endl;
        // }
        // else if(cnt_for_one>=other_hulf) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
    }


    return 0;
}