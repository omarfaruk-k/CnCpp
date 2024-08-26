#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    


    cout<<abs(v[1]-v[0])<<" "<<abs(v[n-1]-v[0])<<endl;

    for (int i = 1; i < n-1; i++)
    {
        int mn = min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
        int mx = max(abs(v[n-1]-v[i]),abs(v[0]-v[i]));

        cout<<mn<<" "<<mx<<endl;
    }
    
    cout<<abs(v[n-1]-v[n-2])<<" "<<abs(v[n-1]-v[0])<<endl;
    
    
    
    
    

    return 0;
}