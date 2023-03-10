#include<bits/stdc++.h>  //Preprocessor derivative headerfile
using namespace std;        //using declaration

int main(){                 //Decleeration of main function
    int n,m;        //variable decleratrion, n is the size first array, m is for 2nd array

    cin>>n;         //taking input the size of first array as n
    int arr[n];     //decleration of first array
    for(int i=0;i<n;i++){       //loop for array input
        cin>>arr[i];        //inpuit in array
    }

    cin>>m;                     //taking input hte size of 2nd array as m
    int arr2[m];                //decleration of 2nd array
    for(int i=0;i<m;i++){       //loop for array input
        cin>>arr2[i];           //inpuit in array
    }



    int max1=*max_element(arr,arr+n);       //storing maximum value of array in variable name max1
    int max2=*max_element(arr2,arr2+m);     //storing maximum value of array2 in variable name max2


    int freq1[max1+1]={0};          //decleration of an array for keeping the frequerncy of elements of first array, its size is the maximum value of array+1 
    int freq2[max2+1]={0};          //decleration of an array for keeping the frequerncy of elements of second array, its size is the maximum value of array2+1
                                    //Also setting all the elements of both of this is array to 0
 
 
 
    for(int i=0;i<n;i++) freq1[arr[i]]++;    //finding the frequency of array
    for(int i=0;i<m;i++) freq2[arr2[i]]++;   //finding the frequency of array2

    for(int i=0;i<max2+1;i++){              //loop for iterating the value tile the last index of biggest array
        if(freq1[i]<freq2[i]){              //if freq of any elemnt from first array is smaller then that of 2nd, then this elemt is missing and its our answer 
            cout<<i<<" ";                   //printing the result i
        }
    }

    return 0;           //reutrn nothing from main function
}