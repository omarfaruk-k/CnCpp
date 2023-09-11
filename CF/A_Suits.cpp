#include<bits/stdc++.h>
using namespace std;

int main(){

    int tie,scar,vest,jckt,tieSetCost, scarSetCost, tieSet, scarSet;
    cin>>tie>>scar>>vest>>jckt>>tieSetCost>>scarSetCost;

    if(tieSetCost<scarSetCost){
        scarSet = min({scar,vest,jckt});
        jckt-=scarSet;
        tieSet = min({jckt,tie});
    }

    else {
        tieSet=min({tie,jckt});
        jckt-=tieSet;
        scarSet=min({jckt,scar,vest});
    }

    int totalCost = (scarSet*scarSetCost)+(tieSet*tieSetCost);
    cout<<totalCost<<endl;

    return 0;
}