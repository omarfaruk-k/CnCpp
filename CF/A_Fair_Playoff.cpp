#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n1,n2,n3,n4, m1,m2,count=0;
        cin>>n1>>n2>>n3>>n4;
        m1=max(n1,n2);
        m2=max(n3,n4);

        if(m1>n3 || m1>n4) count++;
        if(m2>n1 || m2>n2) count++;

        count==2 ? cout<<"YES"<<endl: cout<<"NO"<<endl;

    }
    

    return 0;
}

