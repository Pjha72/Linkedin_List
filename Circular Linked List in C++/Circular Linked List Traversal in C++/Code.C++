#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// Method : 1
void printList(Node *head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    for(Node *curr = head->next;curr!=head;curr = curr->next){
        cout<<curr->data<<" ";
    }
}
// Method : 2
void traversal(Node *head){
    if(head==NULL) return;
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr!=head);
}