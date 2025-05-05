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
    int c2,c3,c5,c6;
    cin>>c2>>c3>>c5>>c6;

    int tot = 0;

    int a = min(c2,min(c5,c6));
    tot = 256*a;
    c2=c2-a;

    int b = min(c2,c3);
    tot+=32*b;


    cout<<tot<<endl;
     

    return 0;
}