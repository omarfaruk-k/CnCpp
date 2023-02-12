using namespace std;  //preprocessor derivative header file
#include<iostream>    //using declaration

int gcd(int a,int b);  //function prototyping 

int main(){            // main function declaration
    int n1,n2,a,b,res;  //int type variable declaration
    cin>>n1>>n2;      //taking input of two number without any order
    if(n1>n2){a=n1,b=n2;}  // if and else condition for putting biggest value in a and  lowest in b
    else{a=n2,b=n1;} 

    res=gcd(a,b);  //calling function for gcd
    cout<<res<<endl; //printing result

    return 0;    //return from main function
}


int gcd(int a,int b){ //gcd funcion with int return type
    if(b==0){  //base case
        return a; //if base case true then return a, which is the gcd value
    }
    gcd(b, a%b);  //recursion of function gcd with replacing a with b and b with the modulus of a and b
}


