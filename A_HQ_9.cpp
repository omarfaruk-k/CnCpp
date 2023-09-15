#include<bits/stdc++.h>
using namespace std;

int main(){
    string ss;cin>>ss;
    bool flag = false;
    for (int i = 0; i < ss.length(); i++)
    {
        if (ss[i]== 'H' || ss[i]=='Q' || ss[i]=='9')
        {
            flag = true;
            break;
        }
        
    }
    
    if(flag==false) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}