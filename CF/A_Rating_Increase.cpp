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
        string s;cin>>s;

        bool ans = 0;

        for (int i = 1; i < s.size(); i++)
        {
            string a = s.substr(0,i);
            string b = s.substr(i);

            int c  = stoll(a);
            int d = stoll(b);

            if(b[0]!='0' && d>c){
                cout<<a<<" "<<b<<endl;
                ans = 1;
                break;
            }
        }

        if(!ans) cout<<-1<<endl;
        
    }
    
     

    return 0;
}