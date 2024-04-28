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

        int n;cin>>n;
        vec v;

        int tot = 0;

        for (int i = 0; i < 12; i++)
        {
            int a;cin>>a;
            v.pb(a);
            tot+=a;
        }
        
        if(tot<n) cout<<-1<<endl;
        else {

        sort(v.rbegin(),v.rend());

        int sum = 0;
        int cnt = 0;
        

        for(auto i:v){
            if(sum>=n) break;
            else{

            sum+=i;
            cnt++;
            }
        }
        


        cout<<cnt<<endl;
        }
    
    
     

    return 0;
}