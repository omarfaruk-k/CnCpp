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
        string s;cin>>s;
        vector<char> stk;

        int i=n;
        // i--;




        while (i>0)
        {
            if((s[i]=='a' || s[i]=='e')  && ((i-1) !=0)) {

                s.insert(i-1,".");
                // stk.push_back(s[i]);
                // stk.push_back(s[i-1]);
                // stk.push_back('.');
               // i-=2;
            //}else {
                //stk.push_back(i);
            }
                i--;


        }
        
        //reverse(stk.begin(),stk.end());

        // for(auto i:stk){
        //     cout<<i;
        // }cout<<endl;

        // for (int i = 1; i < n; i++)
        // {
        //     if(s[i]=='a' || s[i]=='e'){
        //         if(s[i+2] == 'a' ||  s[i+2] == 'e') s.insert(i+1,".");
        //         else s.insert(i+2,".");
        //         //n++;
        //     }
        // }
        // cout<<s<<endl;



    }
    
     

    return 0;
}