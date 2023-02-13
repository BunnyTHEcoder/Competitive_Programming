#include <bits/stdc++.h>
#define lli long long int
#define ar(n) arr[n]
#define vt vector
#define pb push_back
#define minn INT_MIN 

#define maxx  INT_MAX 
#define el endl
#define sp " "
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int a=this->data;
        if(this->next!=NULL){
            
            delete next;
            this->next==NULL;
            
        }
        cout<<"Memory is now free for node with data "<<a<<el;
    }
};

void insertAtTail(node* &tail, int data){
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtHead(node* &head,int data){
    node* temp=new node(data);
    temp->next=head;
    head=temp;
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
        insertAtHead(head,data);
        return;
    }
    int cnt=1;
    node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    node* nodeToInsert=new node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteNode(node* &head,node* tail,int position){
    if(position==1){
        node* temp=head;
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
        
        
        prev->next=current->next;
        if(prev->next==NULL){
            tail=prev;
        }
        current->next=NULL;
        
        delete current;
    }
}
int main()
{
  node* node1=new node(11);
  node* head=node1;
  node* tail=node1;
  
  print(head);
  insertAtTail(tail,21);
  print(head);
  insertAtTail(tail,31);
  print(head);
  insertAtposition(tail,head,4,41);
  
  print(head);
  deleteNode(head,tail,4);
  print(head);
  cout<<head->data<<el;
  cout<<tail->data<<el;
}

