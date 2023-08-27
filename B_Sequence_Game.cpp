#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while (n--)
    {
        int k;cin>>k;
        int arr[k];

        for (int i = 0; i < k; i++)
        {
            cin>>arr[i];
        }
        vector<int> vv;
        vv.push_back(arr[0]);


        for(int i=1;i<k;i++){

            if(arr[i]>=arr[i-1]){
                vv.push_back(arr[i]);
            }
            else
            {
                vv.push_back(1);
                vv.push_back(arr[i]);
            }
            
        }

        cout<<vv.size()<<endl;
        for (int i = 0; i < vv.size(); i++)
        {
            cout<<vv[i]<<" ";
        }cout<<endl;
        
        
        
        
    }
    

    return 0;
}