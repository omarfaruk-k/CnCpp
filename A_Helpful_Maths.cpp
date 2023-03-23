#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string line;
    cin>>line;
    int n=line.size();
    for(int i=0;i<n;i+=2){
        for(int j=i+2;j<n;j+=2){
            if(line[j]<line[i]) swap(line[i],line[j]);
        }
    }

    cout<<line<<endl;
    return 0;
}