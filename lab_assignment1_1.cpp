#include<iostream>  //preprocessor derivative header file
using namespace std; //using declaration

float add(float a, float b);      //function prototyping 
float substract(float a, float b);      //function prototyping 
float divid (float a, float b);      //function prototyping 
float multi(float a, float b);      //function prototyping 
int mod(int a, int b);      //function prototyping 

int main(){            // main function declaration
    float a,b,result;  //variable declaration
    char c;        //char variable declaration for the operator
    cin>>a>>c>>b;  //taking input of two number and operator
    switch (c)     //initialising switch case
    {
    case '+':     //case for addition
        result=add(a,b);  //calling addition function and storing result in result variable
        break;    //break of switch case.
    case '-':      
        result=substract(a,b);  //calling substraction function and storing result in result variable
        break;
    case '/':
        result=divid(a,b);  //calling divition function and storing result in result variable
        break;
    case '*':
        result=multi(a,b);  //calling multiplication function and storing result in result variable
        break;
    case '%':
        result=mod(a,b);  //calling modulus function and storing result in result variable
        break;
    }
    cout<<result<<endl; //printing result
    return 0;   //return from main function
}


float add(float a, float b){   //function for addition with float return type
    float res=a+b;    //calculation
    return res;   //returning result as float variable
}

float substract(float a, float b){  //function for substraction with float return type
    float res = a-b;  //calculation
    return res;  //returning result as float variable
}

float divid (float a, float b){  //function for addition with float return type
    float res=a/b; //calculation
    return res;  //returning result as float variable
}

float multi(float a, float b){  //function for addition with float return type
    float res=a*b; //calculation
    return res;  //returning result as float variable

}
int mod(int a, int b){  //function for addition with int return type
    int res =a%b; //calculation
    return res;  //returning result as int variable
}
