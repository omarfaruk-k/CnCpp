#include<bits/stdc++.h>
using namespace std;

struct bst
{
    int data;
    bst *left;
    bst *right;
};

bst *node_create(int data){
    bst *newnode = new bst;
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

bst *insert(bst *node, int item){
    if(node == NULL){
        return node_create(item);
    }
    else if(node->data <= item){
        node->left = insert(node->left, item);
    }else{
        node->right = insert(node->right, item);
    }
    return node;
}

void inorder(bst *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(bst *root){
    if(root != NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(bst *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main(){
    bst *root = NULL;
    int n, item;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> item;
        root = insert(root, item);
    }
    
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
