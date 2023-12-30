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
        int cnt=0;
        //int a=1;

        while (n>1)
        {
            if(n%6==0) {
                n = n/6;
                cnt++;
            }

            else if(n>2){
                n *= 2;
                cnt++;
            }

            else {
                cnt = -1;
                break;
            }
        }

        if(n==1) cout<<cnt<<endl;
        else  cout<<-1<<endl;
        
    }
    
     

    return 0;
}