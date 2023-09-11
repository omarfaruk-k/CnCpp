#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        int arr[n];
        int cnt1=0,cnt2=0,tot=0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(arr[i]==1){
                cnt1++;
                tot+=arr[i];
            }
            else if(arr[i]==2){
                cnt2++;
                tot+=arr[i];
            }
        }

        if(tot%2==0){
           if ((cnt1%2==0 && cnt1!=0) || (cnt1==0 && cnt2%2==0)){
                cout<<"YES"<<endl;
            }
            else if(cnt1==0 && cnt2%2!=0) cout<<"NO"<<endl;
            
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }
    

    return 0;
}