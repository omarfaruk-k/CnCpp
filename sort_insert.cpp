#include<bits/stdc++.h>   //preprocessor derivative header file
using namespace std;        //using decleration

int main(){             //main function decleration
    int n,x=0,j;        //decleration of variable
    cin>>n;             //taking input of the size of array
    int arr[n];        //decleration of array

    for (int i = 0; i < n; i++)     //loop for array input
    {
        cin>>arr[i];        //taking input of array
    }
    

    for(int i=0;i<n;i++){          // loop for running through the whole array
        x= arr[i];              //firstly, taking the ith element of the array intu a variable 
        j = i - 1;                       //then, sotirng the index of the previous element of i
        while (j >= 0 && arr[j] > x){       //if the i is 0, then j is negative, then the loop will not run. the loop only
                                            //run if the jth element is bigger or equal to 0 and if the element of jth index is bigger then i'th index 
            arr[j+1]=arr[j];            //storing the jth index value to its next index
            j--;                //and then decreasing the j to further check the previous indez of j 
        }
        arr[j+1]=x;         //finally, the element of i'th index stored in the sorted position

    for (int i = 0; i < n; i++)     //loop for array print
    {
        cout<<arr[i];      //priting the ith index of array
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
    }
    return 0;
}