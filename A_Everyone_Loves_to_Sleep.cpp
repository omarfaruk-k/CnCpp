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
        int n, gh,gm;
        cin>>n>>gh>>gm;
        ld ghum = gh*60+gm;

        vec v;

        for (int i = 0; i < n; i++)
        {
            int h,m;
            cin>>h>>m;
            int time = (h*60+m)-ghum;

            if(time<0) v.push_back(time+1440);
            else v.push_back(time);

        }

        sort(v.begin(),v.end());
        int tt= v[0];

        cout<<tt/60<<" "<<tt%60<<endl;
        
    }
    
     

    return 0;
}