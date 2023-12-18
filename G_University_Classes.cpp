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


int arr[7];

int32_t main(){
    int n;cin>>n;

    while (n--)
    {
        string s; cin>>s;
        for (int i = 0; i < 7; i++)
        {
            if(s[i]=='1'){
                if(arr[i]==0) arr[i]=1;
                else arr[i]++;
            }
        }
        

    }
    int mx = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if(arr[i]>mx) mx=arr[i];
    }
    
     cout<<mx<<endl;

    return 0;
}