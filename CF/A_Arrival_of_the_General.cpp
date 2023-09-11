#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    cin>>arr[0];
    int min=arr[0];
    int max=arr[0];
    int min_i=0,max_i=0,ans;

    for (int i = 1; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=min){
            min=arr[i];
            min_i=i;
        }
        if(arr[i]>max){
          max=arr[i];
          max_i=i;

        } 
    }

    n--;
    if (min_i<max_i)
    {
        ans=(max_i+(n-min_i))-1;
    }
    else ans=max_i+(n-min_i);
    

    cout<<ans<<endl;

    

    return 0;
}