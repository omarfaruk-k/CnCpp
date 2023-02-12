#include<iostream>   //preprocessor derivative header file
#define g 9.8   //preprocessor definition or Macros
using namespace std;  //using declaration

float weight(float m); //function prototyping 

int main(){   // main function declaration
    float w,m;  //float variable declaration for mass and weight
    cin>>m; //taking input of mass as m variable
    w=weight(m); //calling the function of weight for weight calculation
    cout<<"The weight is: "<<w<<endl; //printing the weight

    return 0; //return from main function
}

float weight(float m){  //function wight with float return type
    float w=g*m;  //calculating weight
    return w;  //returning weight as w veriable
}