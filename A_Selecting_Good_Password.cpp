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



int32_t main()
{

    string s;
    cin>>s;
    int len=s.size();
    int a=0;
    if(len<=40){
    if(len<10) cout<<"NO"<<endl;


    else if(len>=10 && len<20)
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>='a' && s[i]<='z') {
                a++;
                break;
            }
        }
        for(int i=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z') {
                a++;
                break;
            }
        }
        for(int i=0; i<len; i++)
        {
            if(s[i]>='0' && s[i]<='9') {
                a++;
                break;
            }
        }
        for(int i=0; i<len; i++)
        {
            if(s[i]=='!' || s[i]=='@' || s[i]=='#'  || s[i]=='*' || s[i]=='(' || s[i]==')' || s[i]=='{' || s[i]=='}' || s[i]=='[' || s[i]==']'){
                a++;
                break;
            }
        }

        if(a>=4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    else if(len>=20){
        for(int i=0; i<len; i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
                a++;
                break;
            }
        }

        for(int i=0; i<len; i++)
        {
            if(s[i]>='0' && s[i]<='9') {
                a++;
                break;
            }
        }
        for(int i=0; i<len; i++)
        {
            if(s[i]=='!' || s[i]=='@' || s[i]=='#'  || s[i]=='*' || s[i]=='(' || s[i]==')' || s[i]=='{' || s[i]=='}' || s[i]=='[' || s[i]==']'){
                a++;
                break;
            }
        }


        if(a>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
return 0;
}
