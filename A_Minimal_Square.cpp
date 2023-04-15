#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while (n--)
    {
        int a,b,lrg,sml,ans;
        cin>>a>>b;
        if(a>b) lrg=a,sml=b;
        else lrg=b,sml=a;

        if(sml*2>=lrg)
        {
            ans= pow(sml*2,2);    
        }
        else ans=pow(lrg,2);

        cout<<ans<<endl;

    }

    

    return 0;
}