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
        int ehm;cin>>ehm;
            int ai=-1,aj=-1;
            for (int i = 1; i <=ehm && ai==-1; i++)
            {
                for (int j = i; j <=ehm && ai==-1; j++)
                {
                    int xorr=i^j;
                    if(xorr==ehm){
                    ai=i;
                    aj=j;

                    }
                }
                
            }
            if(ai==-1) cout<<-1<<endl;
            else cout<<ai<<" "<<aj<<endl;
       
        
    }
    
     

    return 0;
}