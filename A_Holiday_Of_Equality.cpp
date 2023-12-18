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

    int arr[tc];
    int maxx= INT_MIN;
    int sum=0;

    for (int i = 0; i < tc; i++)
    {
        cin>>arr[i];
        if(arr[i]>maxx) maxx=arr[i];
    }

    for (int i = 0; i < tc; i++)
    {
        sum+=(maxx-arr[i]);
    }
    
    cout<<sum<<endl;
     

    return 0;
}