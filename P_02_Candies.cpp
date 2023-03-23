#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,a,b,sum=0;
    cin>>n;
    int arr[n];
    for(int u=0;u<n;u++) cin>>arr[u];

    cin>>a>>b;
    for (int u=0; u<n; u++){
        if(a<=u && u<=b) sum+=arr[u];
    }

    cout<<sum<<endl;

    return 0;
}