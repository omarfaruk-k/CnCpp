#include<iostream>
using namespace std;


int main(){
  int t=0;
  cin>>t;
  while(t--){
    char n;
    cin>>n;

    if(n=='c' || n=='o' || n=='d' || n=='e' || n=='f' || n=='r' || n=='s'){
            cout<<"YES"<<endl;

        }else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
    
}