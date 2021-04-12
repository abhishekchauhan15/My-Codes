#include<iostream> 
using namespace std;
struct Node{
    int data;
    Node* next=NULL;

    Node(int x){
        data =x;
        next=NULL; 
    }                                                   //Can be done by recursion also (video 6) 

};
void printList( Node* Head){
    Node* curr=Head;
    while(curr!=NULL){
       cout<<curr->data<<" ";
       curr=curr->next;   //goes to next node 
    }
}
int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);

    head->next=temp1;
    temp1->next=temp2;

    printList(head);
    

return 0;
}