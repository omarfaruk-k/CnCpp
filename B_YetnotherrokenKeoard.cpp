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
        vector<char> v;
        int n = s.size();
        int cb=0,cB=0;


        for (int i = n-1; i>=0; i--)
        {
            if(s[i]== 'b') cb++;
            else if(s[i] == 'B') cB++;

            else{
                if(cb>0 && s[i]>='a' && s[i]<='z'){
                    cb--;
                }
                else if(cB>0 && s[i]>='A' && s[i]<='Z'){
                    cB--;
                }

                else v.push_back(s[i]);

            }

        }

    for(auto i=v.rbegin(); i!=v.rend(); ++i){
        cout<<*i;
    }
        
        cout<<endl;
        
    }
    
     

    return 0;
}





