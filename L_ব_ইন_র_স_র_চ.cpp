#include<bits/stdc++.h>  //Preprocessor derivaticve headerfile
using namespace std;      //Using declaration

int main(){                 //decleration of main function
    
    int n,t;        //declering variable for the size of two function
    cin>>n;         //taking input the size for first array
    int ara1[n];            //decleration of array with n size
    for(int i=0;i<n;i++){       //loop for array input
        cin>>ara1[i];           //input value in ith index
    }
    cin>>t;                 //taking input the size for 2nd array
    int ara2[t];            //decleration of array with t size
    for(int i=0;i<t;i++){       //loop for array input
        cin>>ara2[i];           //input value in ith index
    }

    int count=0;        //taking a variable that will keep track if elements from 2nd array found in 1sr array

    for(int i=0;i<t;i++)                             // loop for the total check
    {

        int b=0,e=n-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
        while (b<=e && ara1[mid]!=ara2[i])       //loop for binary search, will stop if biggening is bigger then end and if target digit is found
        { 
            if (ara1[mid]>ara2[i]){          //chechikng if elemnt of mid of array is bigger then target
                e=mid-1;                // if elemn t is bigger then b will remain same and e will move to left
            }else{                  //if target is not bvigger then e will remain same and b will move to right
                b=mid+1;            //changing the value of b to mid+1
            }

            mid=floor((b+e)/2);         //changning  the mid every time
            
        }
        if(ara1[mid]==ara2[i]){         //checking if element from  2nd array is eqaul to 1st array
            count++;                //If both elements are same, increase the counter by one
        }
       

        
    }cout<<count<<endl;             //printing the last result
    


    return 0;           //return nothing from main funciton
}