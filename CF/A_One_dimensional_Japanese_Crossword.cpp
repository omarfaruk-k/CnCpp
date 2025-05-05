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
    int cnt =0;
    vec v;


    string s;cin>>s;

    for (int j = 0; j < n; j++)
        {
            if(s[j]=='B'){
                cnt++;
                }
                
            if(s[j+1]!='B' && cnt!=0){
                v.push_back(cnt);
                cnt = 0;
            }
            
        }
            
        
    
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}