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
    int arr[]={4,7,47,74,44,444,447,474,477,777,774,744};

    int i = 1;int j = arr[0];
    int ok = 0;

    while (n>=j)
    {
        if(n%j==0) {
            ok=1;
            break;
        }
        else j = arr[i];
        i++;
    }
    


    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
     

    return 0;
}