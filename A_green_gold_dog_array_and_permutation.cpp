#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        vector<pair<int,int>> vv;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            vv.push_back({a,i});
            
        }
        sort(vv.rbegin(), vv.rend());

        // for (int i = 0; i < n; i++)
        // {
        //     cout<<vv[i].first<<" "<<vv[i].second<<endl;
        // }
            int cnt = 1;
    vector <int> ans(n);
    
    for(auto i:vv)
    {
        ans[i.second] = cnt;
        cnt++;
    }
    for(auto i:ans){
        cout << i <<" ";
    } cout << endl;
        
    }
    

    return 0;
}
