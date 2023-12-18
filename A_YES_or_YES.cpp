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
        string str;
        cin>>str;

        transform(str.begin(),str.end(),str.begin(), ::tolower);
        
        if(str=="yes") cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
     

    return 0;
}