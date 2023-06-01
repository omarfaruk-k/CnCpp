#include<bits/stdc++.h>

using namespace std;

struct Node{

    int data;
    Node *BACK;
    Node *FORW;

};

Node *FIRST = NULL;
Node *LAST = NULL;

Node *create_node(int item)
{

    Node *NEW = new Node;

    if(NEW == NULL)
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }

    NEW->data = item;
    NEW->BACK = NULL;
    NEW->FORW = NULL;

    return NEW;


}

void insert_at_beginning(Node * NEW)
{
    if( FIRST == NULL && LAST == NULL)
    {
        FIRST = NEW;
        LAST = NEW;
    }

    else
    {
        NEW->FORW  = FIRST;
        FIRST->BACK = NEW;
        FIRST = NEW;
    }
}

void Traverse()
{
    Node *PTR = FIRST;

    while(PTR != NULL)
    {
        cout<<PTR->data<<" ";
        PTR = PTR->FORW;
    }
    cout<<endl;


    Node *PTR2 = LAST;

    while(PTR2 != NULL)
    {
        cout<<PTR2->data<<" ";
        PTR2 = PTR2->BACK;
    }
    cout<<endl;
}



int main()
{

    int n, item;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>item;

        Node *NEW = create_node(item);

        insert_at_beginning(NEW);
    }

    Traverse();



    return 0;
}
