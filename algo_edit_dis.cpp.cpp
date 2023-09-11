#include<bits/stdc++.h>
using namespace std;

int main()
    {
    string st1,st2;
    cin>>st1>>st2;

    int n=st1.size();
    int m=st2.size();

    int ed[n+1][m+1];

    for(int i=0;i<n+1;i++){
        ed[i][0]=i;
    }
    for(int j=0;j<m+1;j++){
        ed[0][j]=j;
    }


    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(st1[i-1]==st2[j-1]){
                ed[i][j]=ed[i-1][j-1];
            }
            else {
                ed[i][j]=1+min({ed[i-1][j],ed[i][j-1],ed[i-1][j-1]});
            }
        }
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            cout<<ed[i][j]<<" ";
    }cout<<endl;
        }

    int i=n,j=m;
    while(i!=0){
        if(ed[i][j]==ed[i-1][j-1] && st1[i-1]==st2[j-1]){
            i--;j--;
        }
        else{
            if(ed[i][j]== 1+ed[i-1][j]){
                cout<<st2[j-1]<<" is inserted"<<endl;
                i--;
            }
            else if(ed[i][j]== 1+ed[i][j-1]){
                cout<<st2[j-1]<<" is deleted"<<endl;
                j--;
            }
            else {
                cout<<st2[j-1]<<" is replaced by "<<st1[i-1]<<endl;
                i--;j--;
            }
        }
    }


    return 0;
}
