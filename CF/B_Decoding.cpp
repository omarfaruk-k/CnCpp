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
    string s; cin>>s;
    string a;

    for (int i = 0; i < n; i+=2)
    {
        a.push_back(s[i]);
    }
    for (int i = 1; i < n; i+=2)
    {
        a.insert(a.begin(), s[i]);
    }
    
     cout<<a<<endl;

    return 0;
}