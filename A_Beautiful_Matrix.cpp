#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=5,loc_i,loc_j, count;
    int arr[5][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1) loc_i=i,loc_j=j;
        }
    }
    
    if(loc_i>2) count=loc_i-2;
    else count=2-loc_i;
    if(loc_j>2) count+=loc_j-2;
    else count+=2-loc_j;

    
    cout<<count<<endl;    

    return 0;
}