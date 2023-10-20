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

    int left=0;
    int right = 0;
    while (tc--)
    {
        int x,y;
        cin>>x>>y;
        if(x>0) right++;
        else left++;
    }

    if(left<=1 || right <=1) {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    
     

    return 0;
}