#include<bits/stdc++.h>
using namespace std;

int print(int arr[],int i, int n){
    if(i<n){
    print(arr,i+1,n);
    cout<<arr[i]<<" ";
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
    print(arr,i,n);

    return 0;
}