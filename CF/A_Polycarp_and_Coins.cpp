#include<iostream>
using namespace std;
int main(){
    int n,b1=0,b2=0,t;
    cin>>t;
    while(t--){
        cin>>n;
        b1=(n/3);
        b2=b1;

        if(b1*3!=n){
            if(n-b1*3==1) b1+=1;

            if(n-b1*3==2) b2+=1;
        }


        
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
