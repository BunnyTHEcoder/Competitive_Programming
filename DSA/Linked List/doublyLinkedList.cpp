#include <bits/stdc++.h>
#define lli long long int
#define ar(n) arr[n]
#define vt vector
#define pb push_back
#define minn INT_MIN 

#define maxx INT_MAX 
#define el endl
#define sp " "
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* pre;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
    ~node(){
        int a=this->data;
        if(this->next!=NULL){
            
            delete next;
            this->next==NULL;
            this->pre=NULL;
            
        }
        cout<<"Memory is now free for node with data "<<a<<el;
    }
};

void insertAtTail(node* &tail,node* &head, int data){
    if(tail==NULL){
        node* temp=new node(data);
        tail=temp;
        head=temp;
    }
    else{
        node* temp=new node(data);
        tail->next=temp;
        temp->pre=tail;
        tail=temp;
    }
}
void insertAtHead(node* &tail,node* &head,int data){
    if(head==NULL){
        node* temp=new node(data);
        head=temp;
    }
    else{
        node* temp=new node(data);
        temp->next=head;
        head->pre=temp;
        head=temp;
    }
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<el;
}
void insertAtposition(node* &tail,node* &head,int position,int data){
    if(position==1){
        insertAtHead(tail,head,data);
        return;
    }
    int cnt=1;
    node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head,data);
        return;
    }
    node* nodeToInsert=new node(data);
    nodeToInsert->pre=temp;
    nodeToInsert->next=temp->next;
    temp->next->pre=nodeToInsert;
    temp->next=nodeToInsert;
}
void deleteNode(node* &head,node* tail,int position){
    if(position==1){
        node* temp=head;
        head->next->pre=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* current=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=current;
            current=current->next;
            cnt++;
        }
        

        if(current->next==NULL){
            prev->next=current->next;
            current->pre=NULL;
            tail=prev;
        }
        else{
            prev->next=current->next;
            current->next->pre=prev;
        }
        current->next=NULL;
        current->pre=NULL;
        delete current;
    }
}
int main()
{
  
  node* head=NULL;
  node* tail=NULL;
  
  print(head);
  insertAtTail(tail,head,21);
  print(head);
  insertAtTail(tail,head,31);
  print(head);
  insertAtHead(tail,head,11);
  insertAtposition(tail,head,3,25);
  
  print(head);
  deleteNode(head,tail,4);
  print(head);
  cout<<head->data<<el;
  cout<<tail->data<<el;
}

