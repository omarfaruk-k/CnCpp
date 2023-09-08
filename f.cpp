#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m,lft=0,rgt=0,diff=0;     //declaring variable for various uses
    cin>>n>>m;                      //taking input of the numbers of days and the price he have to pay for borrow
    for (int i = 0; i < n; i++)     //running the loops till n
    {
        cin>>rgt;               //taking input of the price of honey barrel
        if(lft-rgt>diff){       //checking if the difference is bigger then the previos day's difference
            diff=lft-rgt;       //is difference betwen two consicutive day is bigger then the difference of previos consicutice day, then we store the bigger diff.

        }
        lft=rgt;                //storing todays price to count difference with net days
    }
    if(diff-m<=0) cout<<0<<endl;        //if the ans is -somthing or 0 means the bear losses his money or cannot earn, in this case he nwill not execute his plan
    else cout<<diff-m<<endl;        

    return 0;
}