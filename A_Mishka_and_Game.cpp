#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m_count=0,c_count=0;
    cin>>n;
    while (n--)
    {
        int m,c;
        cin>>m>>c;
        if(m>c) m_count++;
        else if(c>m) c_count++;
    }

    if(m_count>c_count) cout<<"Mishka"<<endl;
    else if(c_count>m_count) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
       

    return 0;
}