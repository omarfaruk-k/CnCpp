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
    
    int n;cin>>n;

    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        int arr[n];
        for (int i = 1; i < n; i+=2)
        {
            arr[i] = i;
        }
        for (int i = 0; i < n; i+=2)
        {
            arr[i] = i+2;
        }

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        
        
    }
    
     

    return 0;
}