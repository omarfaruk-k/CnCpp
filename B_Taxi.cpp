#include<bits/stdc++.h>
using namespace std;

int main(){         
    int n;cin>>n;    
    int cnt=0;
    

    vector<int> vv(5,0);

    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        vv[a]++;
    }

    cnt=vv[4];
    cnt+=vv[3];
    
    if(vv[3]>=vv[1]){
        vv[1]=0;
    }
    else{
        vv[1]=vv[1]-vv[3];
    }
    
    int acc=vv[1]+(2*vv[2]);
    cnt+=(acc/4);

    if(acc%4!=0) cnt++;


    cout<<cnt<<endl;


    return 0;
}
