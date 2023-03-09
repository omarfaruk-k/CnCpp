#include<iostream>              //Preprocessor derivaticve headerfile
using namespace std;            //using declaration

int main(){         //Declaration of main function
    int n;          //variable declaration for the size of array
    cin>>n;         //taking input of the size of array
    int arr[n];     //array of n sized declared


    for(int i=0;i<n;i++){    //loop for array input
        cin>>arr[i];        //input in i th array
    }
    int swp_cnt=0;              //a variable declerad for tracing the total swap
    for(int i=1;i<n;i++){       //first loop for sorting, this will do loop for pass
        for(int j=0;j<n-i;j++){         //secound loop for sorting, will run till the n-i elemnts off arrray
            if(arr[j]>arr[j+1]){         //Chechikg if right side elemnt is bigger then the element we itterratring 
                swap(arr[j],arr[j+1]);  //swaping if the element of right side is bigger
                swp_cnt++;             // Increasing the swap count by one for every swap
            }
        }
    }

    cout<<"Array is sorted in "<<swp_cnt<<" swaps."<<endl;   //printing the total swap
    cout<<"First Element: "<<arr[0]<<endl;              //prtinting the first elament of aray
    cout<<"Last Element: "<<arr[n-1]<<endl;             //printing the last element of arra

    return 0;                                  //Nothing returening from main function
}