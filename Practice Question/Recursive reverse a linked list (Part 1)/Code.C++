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

// Method-1 : Using Recusrion
Node *reverseLL(Node *head){
    // Base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *remainingNode = reverseLL(head->next);
    Node *temp = head->next;
    temp->next = head;
    head->next = NULL;
    return remainingNode;
}