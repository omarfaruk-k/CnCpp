#include<bits/stdc++.h>  //Preprocessor derivative header file
using namespace std;        //Using decleration 

int main(){             //main function decleration
    
    int t,q;            //variable t for time and q for the total questions in contest
    cin>>q>>t;          //taking input
    t=240-t;            //as the progtam starts at 20:00 and run for 4 hour, the contest will run for 240 min. we take t as the time to reach the party, so we have 240-t min to solve questions in cintest

    int arr[q];         //decleration of aray for storing the time needed for each q
    arr[0]=5;            // first question need 5 min so we declared it first
    int k=2;                    //decleration of a variable which will be used to find the time cost for respected qesstion and its value is 2 as we starting count for secound qestion which is in the index number 1 in array
    for(int i=1;i<q;i++){           //loop for finding and storing the time cost
        arr[i]=(k*5)+arr[i-1];      //every question cost five times its number also the time needed for all previous question
        k++;                        //increment of variable k
    }

    int b=0,e=q-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
    while (b<=e && arr[mid]!=t)       //loop for binary search, will stop if biggening is bigger then end and if t found
    {
        if (arr[mid]>t){          //chechikng if elemnt of mid of array is bigger then t
            e=mid-1;                // if elemn t is bigger then b will remain same and e will move to left
        }else{                  //if t is not bvigger then e will remain same and b will move to right
            b=mid+1;            //changing the value of b to mid+1
        }

        mid=floor((b+e)/2);         //changning  the mid every time
            
    }
    if(arr[mid]==t){                //checking if t is found in array
        cout<<mid+1<<endl;          //as we sored time cost in array, the first index 0 is the time needed for 1 question, 2nd index 1 is the time neewde for 2 question. so we add one and print the index number
    }else if(b>e) cout<<b<<endl;    //if  t id not found in array, time t is in the range from b, so we print b as result which is the index number of t's nearest lowest value




    return 0;   //return nothing from main function
}