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
    int a,b,jj;cin>>a>>b;

    char arr[a][b];
    for (int i = 0; i < a; i++)
    {
        int cnt =0;
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='*'){
                cnt++;
            }
            

        }
        if (cnt==1)
        {
            cout<<i+1<<" ";
        }
    }
    
    for (int j = 0; j < b; j++)
    {
        int cnt =0;
        for (int i = 0; i < a; i++)
        {
            if(arr[i][j]=='*'){
            cnt++;
            }
        }
        if(cnt==1){
            cout<<j+1<<endl;
            break;
        }
    }
    
    
     

    return 0;
}