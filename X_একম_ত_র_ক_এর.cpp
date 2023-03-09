#include<iostream>          //Preprocessor derivaticve headerfile
using namespace std;        //using declaration

int main(){             //main function decleration
    int n,d;                // variable n for the size of array, d for rotation
    cin>>n>>d;              //taking input of n and d
    int arr[n],arr2[n];     //decleration of array one for dotring the input and other for storeing vcalue after change

    for(int i=0;i<n;i++){    //loop for array input
    cin>>arr[i];        //input in i th index of array
    }
    int k=0;                //decleration of a variable for tracing the index of second array

    for(int i=d;i<n;i++){       //first loop where the value will be replaced from d posiiton till last in 2nd arrays from first
        arr2[k]=arr[i];         //coping the value of array
        k++;                    //incresing the vaaribale k
    }
    for(int i=0;i<d;i++){       //2nd loop for replacing elemnt from 0 index to d index of first array to 2nd array
        arr2[k]=arr[i];         //placing the value
        k++;                //increment of k
    }

    for(int i=0;i<n;i++){    //loop for array output
    cout<<arr2[i]<<" ";      //printing the 2nd array
    }

    return 0;           //main function erturn nothing

}