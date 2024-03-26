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

        int a,b;cin>>a>>b;

        int cnt=0;

        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <=b; j++)
            {
                if((i*i)+j==a && (j*j)+i==b) cnt++;
            }
            
        }

        cout<<cnt<<endl;
        

    
    
     

    return 0;
}