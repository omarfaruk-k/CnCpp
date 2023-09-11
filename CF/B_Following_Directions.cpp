#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        int flag=0,a=0,b=0;
        cin>>n;
        while(n--){
            char c;
            cin>>c;
            if(c=='R'){
                a++;
            }else if(c=='L'){
                a--;
            }else if(c=='U'){
                b++;
            }else if(c=='D'){
                b--;
            }
            if (a==1 && b==1){
                flag++;
                // break;
            }
        }
        if(flag==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }


            
        }
}
