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
    int  data;
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


void insertNode(node* &tail,int element,int data){
    if(tail==NULL){
        node* temp=new node(data);
        tail=temp;
        temp->next=temp;
    }
    else{
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        
        node* temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;
        
    }
}
void print(node* &tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"Empty CLL"<<el;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<el;
}

void deleteNode(node* tail,int ele){
    if(tail==NULL){
        cout<<"Empty list"<<el;
    }
    else{
        node* prev=tail;
        node* current=prev->next;
        
        while(current->data!=ele){
            prev=current;
            current=current->next;
            
        }
        if(current==prev){
            
            node* temp=tail;
            tail=NULL;
            delete temp;
            return;
        }

        
        prev->next=current->next;
        current->next=NULL;
        tail=prev;
        delete current;
        
    }
}
int main()
{
  
  
  node* tail=NULL;
  
  print(tail);
  insertNode(tail,3,21);
  print(tail);
  insertNode(tail,21,22);
  print(tail);
  insertNode(tail,22,23);
  print(tail);
  insertNode(tail,23,24);
  print(tail);
  insertNode(tail,24,25);
  print(tail);
  deleteNode(tail,21);
  print(tail);

  cout<<tail->data<<el;
}

