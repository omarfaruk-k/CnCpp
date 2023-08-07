#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int lct,pcls,PerPen,PerPencil,storage,pen,pencil;
        cin>>lct>>pcls>>PerPen>>PerPencil>>storage;

        if(lct%PerPen==0){
            pen=lct/PerPen;
        }else{
            pen=(lct/PerPen)+1;
        }

        if(pcls%PerPencil==0){
            pencil=pcls/PerPencil;
        }
        else
        {
            pencil=(pcls/PerPencil)+1;
        }


        if(pen+pencil<=storage) cout<<pen<<" "<<pencil<<endl;
        else cout<<-1<<endl;
        
    }
    



    return 0;
}