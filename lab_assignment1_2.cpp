#include<iostream>  //preprocessor derivative header file
using namespace std;  //using declaration


void func(int x);  //function prototyping 

int main(){       // main function declaration
    int ltr=65;   // declaration of int variable for ascii value and assigning value for A    
    func(ltr);   //calling function

    return 0;  //return from main function
}


void func(int x){  //function with void return type
    if (x > 90)   //base case
        return;   //return nothing if base case is true
    cout<<(char)x<<endl; //printing ascii value as char data tyope
    func(x+1);  //function recursion with one increment per time
}