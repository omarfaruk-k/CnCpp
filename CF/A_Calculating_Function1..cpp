#include<iostream>
using namespace std;

int main(){

    long sum=0,i=1,n;
    cin>>n;

    while(i<=n){
        sum=sum-i;
        i++;
        if(i<=n){
            sum+=i;
            i++;
        }
    }

    cout<<sum;
}