#include<bits/stdc++.h>  //Preprocessor derivative header file
using namespace std;        //Using decleration 

int main(){                 //main function decleration

    int n,t,tgt,ans=0;            // variable n for the eleemnt size, t for test case, tgt for the tergat we will be looking for
    scanf("%d%d",&n,&t);                 //taking input of n and t
    int arr[n];                     //decleration of array

    for(int i=0;i<n;i++)  scanf("%d",&arr[i]);      //taking input in array using loop
    sort(arr,arr+n);
    while(t--)              //while loop for total test case
    {
        scanf("%d",&tgt);           //taking input of target in tgt variable
   
        int b=0,e=n-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
        while (b<=e)       //loop for binary search, will stop if biggening is bigger then end and if tgt found
        {
            if (arr[mid]==tgt){          //cheking if elemnt of mid of array is bigger then tgt
                ans=
                e=mid-1;
                                // if element is bigger, then b will remain same and e will move to left
            }else{                  //if tgt is not bigger, then e will remain same and b will move to right
                b=mid+1;            //changing the value of b to mid+1
            }

            mid=floor((b+e)/2);         //changning  the mid every time
        }

        if(arr[mid]!=tgt) printf("-1\n");     //tgt is not found the result will be -1 as per questions
        else printf("%d\n",mid);                       //else, the index number tgt in array will be print as result
    }
    

    return 0;       //return nothinng from main function
}