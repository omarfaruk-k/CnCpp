#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<pll> vp;

int arr[1000000];

void func(){
    
    for (int i = 10; i < 1000000; i++)
    {
        string s=to_string(i);
        int maxx=-1;
        int minn=10;
        for (int j = 0; j <s.length(); j++)
        {
            if (s[j]>maxx)
            {
                maxx=s[j];
            }
            else if (s[j]<minn)
            {
                minn=s[j];
            }
            
            
        }
        arr[i]=(maxx-minn);
    }
    
}

int32_t main(){

    func();
    int tc;cin>>tc;

    while (tc--)
    {
        int n,m,lrg=-1,store=0;
        cin>>n>>m;
        if (n==m)
        {
            cout<<m<<endl;
            
        }
        else{
        if(n<10) n=9;
        for (int i = n+1; i <=m; i++)
        {
            if(lrg<arr[i]) {
                lrg=arr[i];
                store=i;
            }
        }
        cout<<store<<endl;
        }
    }
    
     

    return 0;
}