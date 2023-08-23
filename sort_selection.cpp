#include<bits/stdc++.h>   //preprocessor derivative header file
using namespace std;        //using decleration


//Sir, this algorithm is slightly different then we taught in class. this algorithm is given in the contest problem details


int selection_sort(int arr[],int n){           //function for selection sort, where arry and its size is the parametre
    int temp=0,cnt=0;                         //variable temp for swaping and cnt for counting the steps


        for (int i = 0; i < n; i++)         //first loop, this loop will select the point
        {
            int min=i;                  //a variable, that will store the index of the lowest unsorted value
            for (int j = i; j<n; j++)     //seound loop, it will run through the array element from the point till last
            {
                if(arr[min]>arr[j]){      //checking whether the the value of min index is bigger or smaller then j
                    min=j;              //if element of min index is bigger then jth value, then we store jth index in min as we try to store the smallest unsorted item
                }
            }
                    temp=arr[min];        //as we are sorting in ascending manner, the smallest elemnt will come first, so we swap here
                    arr[min]=arr[i];      //manual swaping
                    arr[i]=temp;        //manual swaping
                    
                    if(i!=min) cnt++;          //increamenting the counter variable if i is not equal to min when swapping
        }

    return cnt;     //returning the counter
}


int main(){             //main function  
    int n;              //declaring a variable for the size of array
    cin>>n;         //taking input of the size of the array

    int arr[n];         //declating a array size of n
    for (int i = 0; i < n; i++)     //loop for array input
    {
        cin>>arr[i];                //taking input at the index
    }
    

    int cnt= selection_sort(arr,n);        //calling the selection sort function and passing the array and its size


    
    for (int i = 0; i < n; i++)     //loop for array output
    {
        cout<<arr[i];          //printing array element
        if (i!=n-1)
        {
            cout<<" ";
        }
        
    }
    cout<<endl<<cnt<<endl;      //printig the total step needed
    

    return 0;
}