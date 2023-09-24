#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        int arr[n];
        vector <int> v;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i-1]>arr[i]) v.push_back(1);
            else v.push_back(0);
        }
        
    }
    

    return 0;
}