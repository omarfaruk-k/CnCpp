#include<bits/stdc++.h> 
using namespace std;

int main(){                     //main function
    int n,k,oo,cnt=0;       //declearing variables
    cin>>n>>k;            //taking input of the number of participent and the number of participant
    while (n--)         //loop for taking input of every participant and working on them
    {
        cin>>oo;        //tking input of the number of participant pariticipated in ACM ICPC
        if ((oo+k)<=5)     //checikng if individual person can participate atlesat k times in ACM ICPC whre codition is no one can paritcipate more then 5 times
        {
            cnt++;      //incrementing the total participant numbers
        }
        
    }
    cout<<cnt/3<<endl;      // as each team can hold 3 persons, just dividing the total persons by three makes the team number
    

    return 0;
}



