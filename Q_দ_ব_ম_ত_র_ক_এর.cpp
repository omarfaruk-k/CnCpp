#include<bits/stdc++.h>     //preprocessor derivative headerfile
using namespace std;        //Using decleration

int hourglassSum(int n, int arr[6][6]);

int main(){             //main function
    int n=6;                //variable n is the size of the row and column, which is determined 6 for every 2D array of this programm
    int arr[6][6];              //decleration of 2d array with n sized row and column
    for(int i=0;i<n;i++){       //loop for row
        for(int j=0;j<n;j++){   //loop for coloumn
            cin>>arr[i][j];      //taking input of 2D array
        }
    }

    int ans=hourglassSum(n,arr);

    cout<<ans<<endl;   //ptinting the result which is the biggest sum.




    return 0;       //return nothing from main function
}

int hourglassSum(int n, int arr[6][6]){

        int sum=0,max_sum=0;            //decleration of two int variable


/*I was trying this problem for long time and was unsuccesfull every time, then I've seaerched internet and found that 
I have to run those loop of sum till n-2. I was running till n, that's why I got wrong answer all the time. Ive learned it
from https://www.geeksforgeeks.org/maximum-sum-hour-glass-matrix/ this page. */

 
 
    for(int i=0;i<n-2;i++){             //loop for row
        for(int j=0;j<n-2;j++){     //loop for coloum
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];      //sum of the elements of array as hourglass. the element's position change everytime.
                                                                                                            //for upper line of hourglass, coloumn j increas but row i remain same, then for middle point, both increase for one
                                                                                                            //in the lower line, i increase by one again and remain same but j increase every time.

            if(sum>max_sum) max_sum=sum;              //if sum is bgger then store it in bigger variable                                           
        }
    }

    return max_sum;
}
