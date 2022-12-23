#include<iostream>
using namespace std;
int main(){
    int n,big=0,small=0,t;
    cin>>t;
    while(t--){
        cin>>n;
        big=(n/3)*2;
        small=n-big;
        while(1){
        //     if((big*2)+small!=n){
        //     small++;}
        // }
        cout<<small<<" "<<big<<endl;
    }
    return 0;
}
