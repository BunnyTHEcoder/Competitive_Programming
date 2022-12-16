#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
 

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
 
    head = new Node();
    second = new Node();
    third = new Node();
    int w;
    cout<<"enter first data"<<endl;
    cin>>w;
    head->data = w; 
    head->next = second;
 
    cout<<"enter second data"<<endl;
    int y;
    cin>>y;
    second->data = y; 
    second->next = third;
 
    cout<<"enter third data"<<endl;
    int z;
    cin>>z;
    third->data = z;
    third->next = NULL;
 
    cout<<"displaying data : ";
    printList(head);
 
    return 0;
}