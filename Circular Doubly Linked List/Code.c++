#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};
// 1: Previous of head is tail and next of tail is head
// 2. Next of the last node is head and previous of head is last node

// 3. An empty list is a circular doubly linked list with head = NULL
// 4. A single node is a circular doubly linked list with head = tail = node
// Example: 1->2->3->4->5->1

// Advantages: 1. we get all advantages of doubly linked list and circular linked list
// 2. we can access last mode in O(1) time without storing the tail pointer/reference
Node *InsertHeadAtdoublyCircularList(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else{
        temp->next = head;
        temp->prev = head->prev;
        head->prev->next = temp;
        head->prev=  temp;
        return temp;
    }
}

Node *InsertEndAtdoublyCircularList(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else{
        temp->next = head;
        temp->prev = head->prev;
        head->prev->next = temp;
        head->prev=  temp;
        return head;
    }
}