#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n,m,c,cnt=0;
        cin>>n>>m>>c;
        int maxx=max(n,m);
        int minn=min(n,m);

        while (maxx>minn)
        {
            maxx-=c;
            minn+=c;
            cnt++;
        }
        
        cout<<cnt<<endl;
    }
    

    return 0;
}