#include<iostream> //preprocessor derivative header file
#include<math.h>   //cmath header file for mathematical function
using namespace std; //Using declaration
int main(){    //main function

    int n,k; //int type variable
    cin>>n>>k;  //taking input
    int deadline_time = 240; //its 20:00 so left time deadline is 4 hours= 240 min
    int remaining_time =(deadline_time - k); //remaning time 

    //Binary search
    
    int B=0,E=n,MID;

    MID = floor((B+E)/2);

    int time =( MID*5);
    while(B<=E && MID!=remaining_time){
        if(MID<remaining_time){
            B=MID+1;
        }else{
            E=MID-1;
        }
        MID = floor((B+E)/2);
    }

    if(B>E){
        cout<<MID-1<<endl;
    }else{
        cout<<MID<<endl;
    }
    return 0;
}