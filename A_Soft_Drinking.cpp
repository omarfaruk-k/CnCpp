#include<bits/stdc++.h>
using namespace std;

int main(){
    int frnd,btl,ltr_per_btl,lime,lime_slice,salt,ltr_need,salt_need;
    cin>>frnd>>btl>>ltr_per_btl>>lime>>lime_slice>>salt>>ltr_need>>salt_need;

    int nbyltr=(btl*ltr_per_btl)/ltr_need;
    int nbysalt=salt/salt_need;
    int nbylime=lime*lime_slice;
    
    int min_glss=min({nbyltr,nbysalt,nbylime});
    
    cout<<min_glss/frnd<<endl;

    return 0;
}