#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                sum+=min(arr[i],arr[j]);
            }
            
        }
        cout<<sum<<endl;
        
    }
    

    return 0;
}