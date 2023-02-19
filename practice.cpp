#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3,m=n*2;
    int arr[n]={1,2,3};
    int arr2[n]={1,2,3};
    int arr3[m];
    for(int i=m;i<n;i++){
        arr3[i]=arr2[i];
    }
    // for(int i=0;i<n;i++){
    // arr3[i]=arr2[i];
    // }


    for(int i =0;i<n;i++){
        cout<<arr3[i]<<endl;
    }


    return 0;
}