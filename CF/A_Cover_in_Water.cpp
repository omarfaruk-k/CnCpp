#include<bits/stdc++.h>
using namespace std;



int main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int n;cin>>n;
        int cnt = 0; int big=0;
        int total = 0;

        while (n--)
        {
            char s;cin>>s;
            if(s=='.'){
                cnt++;
                total++;
            }
            if(big<cnt) big = cnt;
            if(s=='#') cnt=0;
            
        }

        if(big>=3) cout<<2<<endl;
        else cout<<total<<endl;
        

        
    }
    
     

    return 0;
}