#include<bits/stdc++.h>   
using namespace std;       

int bubble_sort(int arr[],int n){           //function for bubble sort, where arry and its size is the parametre
    int temp,cnt=0;                         //variable temp for swaping and cnt for counting the steps


        for (int i = 0; i < n; i++)         //first loop, this loop will select the point
        {
            for (int j = n-1; j >= i+1; j--)     //seound loop, it will run through the array element from the point till last
            {
                if(arr[j-1]>arr[j]){      //checkinf whether the selected point is bigger or not
                    temp=arr[j-1];        //as we are sorting in ascending manner, the smallest elemnt will come first, so we swap here
                    arr[j-1]=arr[j];      //manual swaping
                    arr[j]=temp;        //manual swaping
                    cnt++;          //increamenting the counter variable if there are any swap happens to keep track the total step used for swaping
                }
            }
        
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
    

    int cnt= bubble_sort(arr,n);        //calling the bubble sort function and passinf the array and its size


    
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