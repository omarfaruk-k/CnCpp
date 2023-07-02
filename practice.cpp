#include<bits/stdc++.h>
using namespace std;

#define n 100

char stk[n];

int top=-1;

void pop(){
    if(top==-1){
        cout<<"Underflow "<<endl;
        exit(1);
    }
    top--;
}

void push(char item){
    if(top==n-1){
        cout<<"OVerflow"<<endl;
        exit(1);
    }
    top++;

    stk[top]=item;
    
}

int main(){
    string infix,post;
    getline(cin,infix);
    infix="("+infix+")";

    for(int i=0;i<infix.size();i++){

        if(infix[i]>='A' && infix[i]<='Z'){
            post.push_back(infix[i]);
        }
        else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^'){
            if((infix[i]=='+' || infix[i]=='-') && top=='*' || top=='/' || top=='^'){
                post.push_back(top);
                pop();
                push(infix[i]);
            }
            else if((infix[i]=='*' || infix[i]=='/') && top=='^'){
                post.push_back(top);
                pop();
                push(infix[i]);
            }
            else{
                
            }
        }




    }
    

    return 0;
}