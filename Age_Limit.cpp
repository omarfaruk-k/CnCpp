#include<iostream>
using namespace std;
int main(){
    int t,min,max,age;
    cin>>t;
    while (t--)
    {
        cin>>min>>max>>age;
        if(min<=age && age<max){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
    
}