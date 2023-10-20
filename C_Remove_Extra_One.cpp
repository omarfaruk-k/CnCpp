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
    int a,b;
    while (tc--)
    {
        int n;cin>>n;
        if(n>a) {
            a=n;
        }
        else{
            if(b>a) b=a; 
        }

    }

    cout<<b<<endl;
    
     

    return 0;
}





