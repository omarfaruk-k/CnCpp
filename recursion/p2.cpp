#include<bits/stdc++.h>
using namespace std;


int print(int arr[],int i,int n){
    if(i<=n){
    cout<<arr[i]<<" "<<arr[n]<<endl;;
    print(arr,i+1,n-1);

    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    print(arr,i,n-1);

    return 0;
}