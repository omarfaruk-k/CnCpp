#include <bits/stdc++.h>
#define ll long long int
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %d ms\n", d, (int)chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )
using namespace std;

ll sum_till_a(int a){
    ll res=0;
    while(a){
        res+=a;
        a--;
    }
    return res;
}

int main(){
    ll a , res=0;
    cin>>a;
    
    time__("Solve Time"){
        res = sum_till_a(a);
    }

    cout<<res;
    return 0;
}