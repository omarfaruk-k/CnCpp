#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    vector<int> vv;
    for (int i = 0; i < t; i++)
    {
        int a;cin>>a;
        vv.push_back(a);
    }
    


    for (int i = 0; i < t; i++)
    {
        int min=INT_MAX;
        int max=INT_MIN;
        for (int j = 0; j < t; j++)
        {
            if(i==j) continue;
            else {
                if(abs(vv[i]-vv[j])>max) max=abs(vv[i]-vv[j]);
                if(abs(vv[i]-vv[j])<min) min=abs(vv[i]-vv[j]);
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    
    
    
    
    

    return 0;
}