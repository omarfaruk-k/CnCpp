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
    int cas=1;

    while (tc--)
    {
        int a,n;
        cin>>a>>n;
        int b=a-1,i=1;
        ull k=0;

        if (n<10000000)
        {
            while (i<n)
            {
            k+= abs(i%a-i%b);
            i++;
            }
        }
        else
        {
            int m=n-10000000;
            n=10000000;
            while (i<n)
            {
                k+= abs(i%a-i%b);
                i++;
            }

            while (i<m)
            {
                k+= abs(i%a-i%b);
                i++;
            }
        }
        
        

        



        cout<<"Case "<<cas<<": "<<k<<endl;
        cas++;
        
    }
    
     

    return 0;
}