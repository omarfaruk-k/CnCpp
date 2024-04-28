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
        int a,b,c;
        int lft = 0;
        cin>>a>>b>>c;

        int tot = a;

        lft = (b+c)%3;

        if(lft>c) cout<<-1<<endl;
        else{
            tot += (b+c)/3 + (lft>0);
            //if(lft>0) tot+=lft;

            cout<<tot<<endl; 
        }
        
    }
     
    return 0;
}