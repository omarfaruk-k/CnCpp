#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int len=s.length();

        if(len==1 || s=="78") cout<<"+"<<endl;
        else if(s[len-1]=='5' && s[len-2]=='3') cout<<"-"<<endl;
        else if(s[0]=='9' && s[len-1]=='4') cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')  cout<<"?"<<endl;

    }
    



    return 0;
}