#include<bits/stdc++.h>     ////preprocessor derivative header file
using namespace std;        //using decleration


struct STACK        //decleration of struct named stack
{
    int data;       //stack has two part, one for int typw data
    STACK *next;        //another part for storing the address of the nexr node
};

STACK *top = NULL;      //decleraing the top as 0

void push(int item){            //funciotn for pushing the elements
    STACK *newnode = new STACK; //we have to made a node first

    newnode->data=item; //keeping the data in the newnly created node
    newnode->next=top;  //storing the address of the top in the newndoe
    top=newnode;        //making new node a top
}

void pop(){     //function to delete the last inserted element, the action callef pop
    top=top->next; //just making the previos node of top as top
}


void traverse(){        //function for traversal
    STACK *node = top;      //putting the top to a node varaible to runn the loop
    if(top==NULL) cout<<"Empty!"; //checking if the stack is empty or not. if empty, then pprinting it
    while (node!=NULL)      // loop for traversal
    {
        cout<<node->data<<" ";      //printing the data of the node
        node = node->next;      //making node the next of its node this wiil works as increament
    }

    cout<<endl;     //pring a line breaks at the end
    
}

int main(){     //main function
    
    int n,m,j;    //int n for test case, m for inputting value
    cin>>n;     //input of n
    while (n--)     //loop will run till  n
    {
        cin>>m;     //taking inpit of m
        if(m==1){       //if m =1, we have to input a value
            cin>>j; //taing input of the value
            push(j);    //calling the push function
        }
        if(m==2){       //if m==2, we have to pop
            pop();  //calling the pop function
        }
        if(m==3){       //if m=3, we have to traverse the stack
            traverse();//calling the function that traverse
        }
    }
    

    return 0;       //main function return nothing
}