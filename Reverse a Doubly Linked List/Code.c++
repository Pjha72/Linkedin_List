#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* reverseDLL(Node *head){
    Node *prev = NULL;
    Node *curr = head;
    if(head==NULL || head->next == NULL) return head;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->next;
    }
    return prev->prev;
}