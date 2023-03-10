#include<iostream> //preprocessor derivative header file
#include<math.h>   //cmath header file for mathematical functions
using namespace std; //using declaration
int main(){   //main function
    int n,i;  //declaring int type variable
    cin>>n;   //taking input
    int arr[n]; //declaring array 

    //loop for taking array inputs

    for(int i =0 ;i <n ; i++){
        cin>>arr[i]; //taking input of array element
    }
    int element; //declaring int type varaiable element
    cin>>element; //taking input
    int arr2[element]; //declaring 2nd array

    //loop for taking array inputs

    for(int i =0 ;i <element ; i++){
        cin>>arr2[i]; //taking input
    }


    int c=0;    //initialilate count variable c 
   for(int i =0 ;i<element;i++)  /*while beg value is less than end and arr of mid is not equal to  array item which we are searching*/
   { 

    int B=0,E=n-1;    /*initialate beggining and end = size -1 because array index starts from 0*/
   
    int MID = floor((B+E)/2); 
   while(B<=E && arr[MID]!=arr2[i]) 
       
   { 
    if(arr[MID]>arr2[i]){  //check if arr[mid] is greater than  array item  


        E = MID-1; //if yes than End = Mid-1
    }else{
        B = MID+1;  //if no Beggining = Mid+1
    }
    MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/
   }
   if(arr[MID]==arr2[i]){ //if array 1 mid is equal to arra2 item
         c++; //increment of count
   }
   }
       //if no
    cout<<c<<endl;  //print count number

 return 0; //return 0 value to the main function
}