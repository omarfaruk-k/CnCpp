#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n,k=0,l=0,count1=0,count2=0;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            k=arr[i];
            if(arr[i]==arr[i+1]){
                count1++;
                k++;
            }
            
        }
        
        
    }
       

    return 0;
}