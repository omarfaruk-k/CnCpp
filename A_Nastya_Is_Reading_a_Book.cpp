#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,a,p,count=0;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a>>arr[i];
    }
    cin>>p;
    for (int i = 0; i < n; i++)
    {
        if(p<=arr[i]) count++;
    }

    cout<<count;
    
    

    return 0;
}