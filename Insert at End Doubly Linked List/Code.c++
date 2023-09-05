#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
        data = x;
        next = prev = NULL;
    }
};

Node *insertAtEnd(Node *head,int x){
    Node *temp = new Node(x);
    Node *curr = head;
    if(head==NULL) return temp;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
