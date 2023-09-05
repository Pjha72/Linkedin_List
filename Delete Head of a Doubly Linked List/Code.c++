#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *deleteHead(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node *curr = head;
    head = head->next;
    head->prev = NULL;
    delete curr;
    return head;
}
// T.C = O(1)