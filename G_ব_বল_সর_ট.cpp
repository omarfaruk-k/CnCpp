#include<bits/stdc++.h>  //Preprocessor derivaticve headerfile
using namespace std;      //using declaration

int main(){  //Declaration of main function

    int n;    //variable declaration for the size of array
    cin>>n;   //taking input of the size of array
    int arr[n];  //array of n sized declared

    for(int i =0;i<n;i++){   //loop for array input
        cin>>arr[i];         //input in i th array
    }

    for(int i=1;i<n;i++){    //first loop for sorting, this will do loop for pass 

        for(int j=0;j<n-i;j++){          //secound loop for sorting, will run till the n-i elemnts off arrray
            if(arr[j]>arr[j+1]){         //Chechikg if right side elemnt is bigger then the element we itterratring 
                swap(arr[j],arr[j+1]);   //swaping if the element of right side is bigger
            }
        }
    }

    for(int i =0;i<n;i++){                 //loop for printing array
        cout<<arr[i]<<" ";                //print the i number element off array
    }

    return 0; //returning nothing from main function
}