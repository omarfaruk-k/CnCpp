#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (1)
    {
        cin>>n;
        if(n==0) break;
        int res;
        if(n>3){
        res=((n*(n-1))/2)-(n-1)-3;
        cout<<res<<endl;
        }
        else cout<<n<<endl;
    }
    

    return 0;
}