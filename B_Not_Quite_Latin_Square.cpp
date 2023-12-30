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

        // int n=3;
        // while (n--)
        // {
        //     string s;cin>>s;
        //     if(s.find('?')){
        //         if(!s.find('A')) cout<<"A"<<endl;
        //         //else if(!s.find('B')) cout<<"B"<<endl;

        //     }
        // }
        
        char mat[3][3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>mat[i][j];

            }
            
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(mat[i][j]== '?'){

                   if((mat[i][0] != 'A') && (mat[i][1]!='A')  && (mat[i][2]!='A')) {cout<<"A"<<endl; break;}
                   else if((mat[i][0] != 'B') && (mat[i][1]!='B')  && (mat[i][2]!='B')) {cout<<"B"<<endl;break;}
                   else if((mat[i][0] != 'C') && (mat[i][1]!='C')  && (mat[i][2]!='C')) {cout<<"C"<<endl;break;}
                }
            }
            
        }
        
        
    }
    
     

    return 0;
}