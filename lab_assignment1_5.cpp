#include<iostream>    //preprocessor derivative header file
using namespace std;  //using declaration

int func(int *x);  //function prototyping 

int main(){       // main function declaration
    int x,res;   //int data type variable declaration
    cin>>x;   //taking input of value x
    func(&x);  //calling the function 
    cout<<x<<endl; //printing same variable x which is change by function 

    return 0;    //return from main function
}

int func(int *x){
    *x++;
    return *x;
}