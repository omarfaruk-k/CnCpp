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

    while (tc--)
    {
        int n;cin>>n;

        if (n== 1 || n==2 || n==4) cout<<-1<<endl;
        else
        {
            int c3=0,c5=0,c7=0;
 
            if (n%3 == 1) {
                c7++;
                n -= 7;
            } else if (n % 3 == 2) {
                c5++;
                n -= 5;
            }
 
            c3 = n / 3;
            
            cout<<c3<<' '<<c5<<' '<<c7<<endl;
        }

 
    

    }
    
     

    return 0;
}