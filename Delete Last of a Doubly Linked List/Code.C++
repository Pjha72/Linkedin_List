#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *deleteLastNode(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
};

// T.c = O(n)
// Reduce the time complexity to maintain the last pointer i.e tail pointer
// In T.C = O(1)