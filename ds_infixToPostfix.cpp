#include<bits/stdc++.h>
using namespace std;

#define max 100

char stk[max];

int top=-1;

void push(char item){
    if(top==max)
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }
    top++;
    stk[top]=item;
}


void pop(){
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
        exit(1);
    }

    top--;
}

int main(){
    
    string infix;

    getline(cin,infix);

    infix="("+infix+")";
    string exp;

    for(int i=0;i<infix.size();i++){

        if(infix[i]>='A' && infix[i]<='Z'){
            exp.push_back(infix[i]);
        }
        else if(infix[i]=='('){
            push(infix[i]);
        }
        else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^'){
            if((infix[i]=='+' || infix[i]=='-') && (stk[top]=='*') || stk[top]=='/' || stk[top]=='^'){
                exp.push_back(stk[top]);
                pop();
                push(infix[i]);
                
            }
        
        else if((infix[i]=='*' || infix[i]=='/') && stk[top]=='^'){
            exp.push_back(stk[top]);
            pop();
            push(infix[i]);
        }
        else {
            push(infix[i]);
        }
        }
        else{
            while (stk[top]!='(')
            {
                exp.push_back(stk[top]);
                pop();
            }
            pop();
            }

    }


    cout<<exp<<endl;
    return 0;
}