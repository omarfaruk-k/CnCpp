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

        string a,b,c;
        cin>>a>>b>>c;
        
        a = a[0];
        b = b[0];
        c = c[0];
        char ans;

        if(a == b && b == c) cout<<"?"<<endl;
        else{

            if(a == "r" && b =="s" && c =="s") cout<<"F";
            else if(a == "p" && b =="r" && c =="r") cout<<"F";
            else if(a == "s" && b =="p" && c =="p") cout<<"F";

            else if(b == "r" && a =="s" && c =="s") cout<<"M";
            else if(b == "p" && a =="r" && c =="r") cout<<"M";
            else if(b == "s" && a =="p" && c =="p") cout<<"M";

            
            else if(c == "r" && b =="s" && a =="s") cout<<"S";
            else if(c == "p" && b =="r" && a =="r") cout<<"S";
            else if(c == "s" && b =="p" && a =="p") cout<<"S";

            else cout<<"?";

            
        }

    
     

    return 0;
}






