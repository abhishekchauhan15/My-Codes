#include<iostream> 
using namespace std;
struct Node{
    int key;
    Node* left=NULL;
    Node* right=NULL;

    Node(int k){
        key=k;
        right=left=NULL;

    }
};
void postorder(Node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);                         //o(n) or theta(h)
        cout<<root->key<<" ";                              //space o(height) or theta(h)
    }

}



int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);


    postorder(root);

return 0;
}