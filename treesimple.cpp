#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <string>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<< " ";
    preorder(root->left);
    preorder(root->right);
}

node* buildTree(node* root){
    int data;
    cin>>data;
    root=new node(data);

    if (data==-1){
        return NULL;
    }

    root->left=buildTree(root->left);
    root->right=buildTree(root->right);


    return root;
}

int main(){

    node* root=NULL;
    root=buildTree(root);

    cout<<"Preorder traversal is: ";
    preorder(root);

    return 0;
}
