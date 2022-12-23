#include<iostream>
using namespace std;

int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        
        cin>>x;
        n=x*2;
        int arr[n],odd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
              
             if(arr[i]%2!=0){
               odd++;
             }
             
            }
            
            if(odd==x){
            cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
    }
    return 0;

}