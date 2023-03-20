#include<bits/stdc++.h>      //preprocessor derivative headerfile
using namespace std;        //Using decleration

int main(){             //main function
    
    int n,count=0,sum=0,loc_a,loc_b;  //variable decleration
    while(1){                         //infinity loop
    cin>>n;                           //taking input of n as the size of array
    if(n==0) break;                 //if n isa equal to zero, the loop will be break
    int arr[n][n];                      //decleration of a 2d array wiht n size
    for(int i=0;i<n;i++){           //outer loop for row
        for(int j=0;j<n;j++){           //inner loop for coloumn
            cin>>arr[i][j];         //taking input in array
        }
    }


    for(int i=0;i<n;i++){           //first loop for row 
        for(int j=0;j<n;j++){       //2nd loop coloumn
            sum=sum+arr[i][j];      //adding all elemnts of coloumn in sum varibale
        }
        if(sum%2!=0){               //checking if sum is odd for every element
            count++;                //if odd them increase the counter
        }
        sum=0;                      //making the sum variable zero for repeted use
    }

    if(count==0) cout<<"OK"<<endl;          //if there is no odd then the result is "Ok"
    else if(count>1) cout<<"Corrupt"<<endl;     //if there is more then one odd in array then it is corrupted

    }

    return 0;       //return nothing from main function
}




    
