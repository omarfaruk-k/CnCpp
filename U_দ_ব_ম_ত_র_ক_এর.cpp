#include<bits/stdc++.h>  //preprocessor derivative headerfile
using namespace std;     //Using decleration

int main(){         //main function
    int t,n;        //variable t fro test case and nb for the size of array
    char a,b;       //as we have char in input, varibale a and b declared in char
    cin>>t;             //tkaing input of testcase
    for(int i=1;i<=t;i++){      //loop that will run till the test case
        cin>>a>>b>>n;           //taking input of the size of array
        long arr[n][n];      //decleration of that suized array
        for(int i=0;i<n;i++){       //outer loop for input
            for(int j=0;j<n;j++){       //inner loop for 2d array input
                cin>>arr[i][j];         //taking input of 2d array
            }
        }

        int count=0,m=n-1;              //int type vribalae count and m for storing the value of n-1
        for(int i=0;i<n;i++){           //outer loop for 2d array
            for(int j=0;j<n;j++){           //inner loop 
                if(arr[i][j]!=arr[m-i][m-j]){       //by drawing the matrix on paper, i found that the oposit  element of one element is the substraction
                                                    //of the index from the last index. here, checking if the opposit elemnt is not equal to the elemnt
                    count++;                        //if oposit elemnt is not equal then increase the counter
                    break;                          //and breaking the loop
                }
            }
        }

        if(count==0) cout<<"Test #"<<i<<": Symmetric."<<endl;       //showing result with the test case number. if counter remains same, that meanns all element and their opposite are same
        else cout<<"Test #"<<i<<": Non-symmetric."<<endl;               //if counter changed, then one element is not equal with its opossit, so the m,atrix is not symmetric
    }
    return 0;       //return nothing from main function
}