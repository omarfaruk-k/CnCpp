#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back`
#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;



int32_t main(){
    int tc;cin>>tc;
    int i = 1;

    while (tc--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+3);

        cout<<"Case "<<i<<": "<<arr[1]<<endl;
        i++;
        
    }
    
     

    return 0;
}