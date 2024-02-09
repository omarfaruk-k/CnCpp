#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    int str;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>str;
        arr[i]=abs(str);
    }

    sort(arr,arr+n);
    

    cout<<arr[0]<<endl;
    
}