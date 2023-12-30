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
        string s;
        cin>>s;
        int n=s.size();

        int off=0;
        int on=0;

        bool ha = 0;

        for(auto i:s) {
            if(i=='0') off++;
            else on++;
        }


        if(off==n || on==n){
            ha = false;
        } 
        else if(off>on && off!=n){
            if(on%2!=0) ha = true;
            else ha = false;
        }
        else if(off<on && on!=n){
            if(off%2!=0) ha = true;
            else ha = false;
        }
        else if(off == on){
            if(off%2!=0) ha =true;
        }

        if(ha) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    
     

    return 0;
}