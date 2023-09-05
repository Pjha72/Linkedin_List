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
// T.C = O(N)
Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == head){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}

// T.C = O(1)
Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;

}