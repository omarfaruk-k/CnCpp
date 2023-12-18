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
        int arr[n];
        int cnt=0;

        bool brk = false;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }


        if(n==1) cout<<0<<endl;

        else{
            for (int i = n-1; i > 0; i--)
            {
                if(arr[i] == 0 && i!=0) {
                    brk = true;
                    break;
                }
                else if(arr[i]<=arr[i-1]) {


                    while (arr[i]<=arr[i-1])
                    {

                        arr[i-1] = arr[i-1]/2;
                        if(arr[i-1] == 0 && ((i-1)!=0)) { brk = true; break;}
                        else cnt++;
                    }
                    
                    
                }
            }


            if(!brk) cout<<cnt<<endl;
            else cout<<-1<<endl;
        }
        
    }
    
     

    return 0;
}