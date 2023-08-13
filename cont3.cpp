#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,cnt=1;
    cin>>t;

    while (t--)
    {
        int num;
        cin>>num;
        if(80<=num && num<=100){
            cout<<"Case "<<cnt<<": "<<"A+"<<endl;
            cnt++;

        }
        else if(75<=num && num<80){
            cout<<"Case "<<cnt<<": "<<"A"<<endl;

            cnt++;
            }
        else if(70<=num && num<75){
            cout<<"Case "<<cnt<<": "<<"A-"<<endl;
            cnt++;
        }
        else if(65<=num && num<70){
            cout<<"Case "<<cnt<<": "<<"B+"<<endl;
            cnt++;
        }
        else if(60<=num && num<65){
            cout<<"Case "<<cnt<<": "<<"B"<<endl;
            cnt++;
        }

        else if(55<=num && num<60){
            cout<<"Case "<<cnt<<": "<<"B-"<<endl;
            cnt++;
        }

        else if(50<=num && num<55){
            cout<<"Case "<<cnt<<": "<<"C"<<endl;
            cnt++;
        }

        else if(45<=num && num<50){
            cout<<"Case "<<cnt<<": "<<"D"<<endl;
            cnt++;
        }

        else if(0<=num && num<45){
            cout<<"Case "<<cnt<<": "<<"F"<<endl;
            cnt++;
        }       

    }
    return 0;
}