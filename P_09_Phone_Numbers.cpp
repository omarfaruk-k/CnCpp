#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,count=0, res;
    cin>>n;

    string number;
    cin>>number;
    
    string::iterator it;
    for(it = number.begin(); it!=number.end();it++){
        if(*it=='8') count++; 
    }

    n=n-count;
    res=n/10;

    //cout<<count<<endl;
    if(count!=0){
        cout<<res<<endl;
    }else cout<<"0"<<endl;


    
    

    return 0;
}