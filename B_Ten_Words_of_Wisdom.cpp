#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        int i=1;
        int cnt=0;
        int max=0;
        while (n--)
        {
            int a,b;
            cin>>a>>b;
            if(a<=10 && b>max) {
                max=b;
                cnt=i;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
    

    return 0;
}