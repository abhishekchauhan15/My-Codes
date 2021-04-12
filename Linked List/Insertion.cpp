#include<iostream>           // insertion 
using namespace std;
struct Node{

    int data ;
    Node* next=NULL;
    
    Node(int val){
        data=val;
    }



};

void insert(int val ,int pos, Node* head){
    
    if(pos==1)
    insertAtStart();



        Node* curr=head;
    for(int i=1; i<=pos-1; i++){     // 1 to  2    pos =3
        curr=curr->next;

    }

    Node* temp=new Node(val);
    temp->next=curr->next;
    curr->next=temp;

    
        }

   


void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){

    Node* head=new Node(20);
    head->next=new Node(1000);

    int val,pos;
    cout<<"enter the value you want to insert ";
    cin>>val;
    cout<<"enter the position where you wan to insert ";
    cin>>pos;



    insert(pos, val , head);
    




    printList(head);


return 0;
}