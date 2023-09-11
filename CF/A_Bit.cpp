#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int m=0;
    while (n--)
    {
        string s;
        cin>>s;
        if(s[1]=='+'){
            m++;
        }
        else if( s[1]== '-'){
            m--;
        }
    }

    cout<<m<<endl;
    

    return 0;
}