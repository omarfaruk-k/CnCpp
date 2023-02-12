#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        char s[m];
        cin>>s;
        for(int i=0,j=m;m>=2;i++,j--){
            if(s[i]=='0'&&s[j]=='1'){
                m-=2;
            }else if(s[i]=='1'&&s[j]=='0'){
                m-=2;
            }
        }
    cout<<m<<endl;
        }
}