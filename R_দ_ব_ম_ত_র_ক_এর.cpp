#include<bits/stdc++.h>  //preprocessor derivative headerfile
using namespace std;      //Using decleration

int main(){         //main function
    
    int n,m;        //variable for the size of array
    cin>>n>>m;      //taking input of variables
    char arr[n][m];         //declering a array of char data type
    for(int i=0;i<n;i++){       //first loop for row
        for(int j=0;j<m;j++){   //2nd loop for column
            cin>>arr[i][j];     //takling input of char in array
        }
    }

    int x,y,count=0;                        //variable x and y for the index number for the element for which we are searching
    cin>>x>>y;                              //taking inout of the variable
    if(x!=0 && x!=n-1 && y!=0 && y!=n-1){       //first condition checking if the elemnt is inside the matrix
        for(int i=x-1;i<x+1;i++){               //first loop for row
            for (int j=y-1;j<y+1;j++){      //secound loop for coloumn
                if(arr[i][j]!='x'){         //chechikng if elements are not matched with x 
                    cout<<"no"<<endl;       //if true, thewn cout no 
                    break;          //break the loop
                }else count++;      //if not ,then increase the counter
            }
            
        }
    }
    else cout<<"no"<<endl;      //if the elements are not in insisdde of matrix, the print no
    
    if(count!=0) {      //if counter remains same that means x not matched and is not same then answer is yes
        cout<<"yes"<<endl;  //printing result
    }

    return 0;       //main function return nothing
}