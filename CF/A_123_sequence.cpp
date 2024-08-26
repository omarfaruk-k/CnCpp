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
    int n;
    int arr[5]={};

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        arr[a]++;
    }

    sort(arr,arr+5, greater<int>());

    // for(int i =0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<arr[1]+arr[2]<<endl;

    return 0;
}