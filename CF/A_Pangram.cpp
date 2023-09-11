#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0,arr[26]={0};
    cin>>n;
    char str[n];
    cin>>str;

    for(int i=0; i<n;i++){
        if(65<=i && i>=90) arr[i-65]=1;
        else if(97<=i && i>=112) arr[i-97]=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"NO"<<endl;
            break;
        }
        else {
            cout<<"YES"<<endl;
            break;
        }
    }

    return 0;
}
