#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
    int n,k; cin>>n>>k;
   vec v;
   int cnt=1;


    for (int i = 0; i < n; i++){
      int a;cin>>a;
      v.push_back(a);
    }

    sort(v.begin(), v.end());

    int mx=0;
    
    for (int i = 1; i < n; i++){

      if (v[i] - v[i - 1] <= k)cnt++;
      
      else {
        mx = max(mx, cnt);
        cnt = 1;
      }
    }

    mx = max(mx,cnt);

    cout<<n-mx<<endl;
    }
    
     

    return 0;
}