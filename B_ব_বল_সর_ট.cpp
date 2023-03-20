#include<bits/stdc++.h>  //preprocessor derivative headerfile
using namespace std;        //Using decleration

int main(){         //main funciotn
    
    int n,t,i=1;        //int type variable n for the size of array, t for the test case an d i for tracing the test case
    scanf("%d",&t);         //taking input of test case t

    while (i<=t)        //loop run till test case
    {
    scanf("%d",&n);         //taking input of the size of array
    int arr[n];     //array of n sized declared
    
    for(int i=0;i<n;i++){    //loop for array input
        scanf("%d",&arr[i]);        //input in i th array
    }


    int swp_cnt=0,temp;              //a variable declerad for tracing the total swap
    for(int i=1;i<n;i++){       //first loop for sorting, this will do loop for pass
        for(int j=0;j<n-i;j++){         //secound loop for sorting, will run till the n-i elemnts off arrray
            if(arr[j]>arr[j+1]){         //Chechikg if right side elemnt is bigger then the element we itterratring 
                temp=arr[j];  //swaping if the element of right side is bigger
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swp_cnt++;             // Increasing the swap count by one for every swap
            }
        }
    }
    //cout<<"Case "<<i<<":"<<" "<<swp_cnt<<endl;      //printing the testcase with the swap count
    printf("Case %d: %d",i,swp_cnt);
    i++;                                        //increasing the tracer for testcase
    }
    


    return 0;       //returning nothing from main function
}