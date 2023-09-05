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
Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}
Node *deleteKthNode(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        return deleteHead(head);
    }

    Node *curr = head;
    for(int i=0;i<k-2;i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

