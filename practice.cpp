#include<iostream> //preprocessor derivatite header file
using namespace std; //using declaration
int gcd(int a, int b);
int main()  //Main function

{  int x,y;
   cin>>x>>y;
   cout<<gcd(x,y)<<endl;
    return 0;
}

int gcd(int a, int b){
     int c = a%b;
      if(c!=0){
         return gcd(b,c);
      }else{
         return b;
      }
   }