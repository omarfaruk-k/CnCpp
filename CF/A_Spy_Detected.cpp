#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n,k=0,idx1=0,idx2=0,cnt1=0,cnt2=0;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        k=arr[0];
        for (int i = 0; i < n; i++)
        {
            if(k==arr[i]){
                cnt1++;
                idx1=i;
                
            }
            else{
                cnt2++;
                idx2=i;
            }
            
        }

        if(cnt1==1){
            cout<<idx1+1<<endl;
        }
        else {
            cout<<idx2+1<<endl;
        }
        
        
    }
       

    return 0;
}