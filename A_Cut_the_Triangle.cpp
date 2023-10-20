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
        int flag=0;
        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        
        if(x1==x2 || x2==x3 || x3==x1 ) flag++;
        if(y1==y2 || y2==y3 || y3==y1 ) flag++;

        flag<2 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    
     

    return 0;
}