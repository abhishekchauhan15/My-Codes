#include<iostream>           // insertion at end 
using namespace std;
struct Node{

    int data ;
    Node* next=NULL;
    
    Node(int val){
        data=val;
    }



};

Node* insertAtStart(Node* head, int value){
    if(head==NULL){
        head=new Node(value);
        return head;
    }

    Node* temp=new Node(value);
    temp->next=head;
    head=temp;


    return head;
}


void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    Node* head=NULL; 
    head =new Node(3);
    head->next =new Node(13);
    head->next->next =new Node(30);




     head=insertAtStart(head , 7);
     head=insertAtStart(head, 8);




    printList(head);


return 0;
}