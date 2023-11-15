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


    int cnt=0;

    int arr[tc], arr2[tc];

    for (int i = 0; i < tc; i++)
    {
        cin>>arr[i]>>arr2[i];
    }


    for (int i = 0; i < tc; i++)
    {
        for (int j = 0; j < tc; j++)
        {
            if(arr[i] == arr2[j]) cnt++;
        }
        
    }
    
    
    cout<<cnt<<endl;
     

    return 0;
}