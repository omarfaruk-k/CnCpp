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

    string s;cin>>s;
    vec v;

    for (int i = 0; i < s.length() ; i++)
    {
        char cha = (char)tolower( s[i] );
        if((cha !='a') && (cha!='e') && (cha!='i') && (cha!='o') && (cha!='u') && (cha!='y')) cout<<"."<<cha;
    }
    
    cout<<endl;


    return 0;
}