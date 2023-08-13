#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

        if(1<=num && num<5){
            cout<<"few"<<endl;

        }
        else if(5<=num && num<10){
            cout<<"several"<<endl;
            }

        else if(10<=num && num<20){
            cout<<"pack"<<endl;
        }
        else if(20<=num && num<50){
            cout<<"lots"<<endl;
        }
        else if(50<=num && num<100){
            cout<<"horde"<<endl;

        }

        else if(100<=num && num<250){
            cout<<"throng"<<endl;
        }

        else if(250<=num && num<500){
            cout<<"swarm"<<endl;
        }

        else if(500<=num && num<1000){
            cout<<"zounds"<<endl;
        }

        else if(1000<=num){
            cout<<"legion"<<endl;
        }       

    
    return 0;
}