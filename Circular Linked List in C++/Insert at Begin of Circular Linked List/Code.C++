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
Node *insertBegin(Node *head, int x){
    if(head == NULL){
        Node *temp = new Node(x);
        temp->next = temp;
        return temp;
    }
    Node *temp = new Node(x);
    Node *curr = head;
    while(curr->next!= head){
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return temp;
}

// T.C = O(1)
Node *insertAtBegin(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        // Insert the node after the head
        temp->next = head->next;
        head->next = temp;
        // swap the new node and head node
        int t = temp->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}