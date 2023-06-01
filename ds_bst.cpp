#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *creatnode(int item){
    node *newnode = new node;
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

node *insert(node *node, int item){
    if(node==NULL){
        node=creatnode(item);
        
    }
    else if(item<=node->data){

        node->left=insert(node->left,item);
    }
    else {
        node->right=insert(node->right,item);
    }

    return node;
}


bool search(node *root, int item){
    if(root==NULL){
        return false;}
    else if(root->data==item) {
        return true;}
    else if(item<=root->data){ search(root->left,item);}
    else {search(root->right,item);}
}



int main(){
    
    node *root=NULL;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        root=insert(root,data);
    }

    cout<<"Enter an element to insert in it's position: "<<endl;
    cin>>data;
    root=insert(root,data);

    int item;
    cout<<"Enter Element to Search"<<endl;
    cin>>item;

    if(search(root,item)==true) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}