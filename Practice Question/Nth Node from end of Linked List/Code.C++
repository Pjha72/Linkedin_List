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

// Method-1 : Using length of the Linkedlist
int NthNodeFromEnd(Node*head,int n){
    int cnt = 0;
    Node *curr;
    for(curr = head;curr!=NULL;curr = curr->next){
        cnt++;
    }
    if(cnt<n) return -1;
    curr = head;
    for(int i=1;i<cnt-n+1;i++){
        curr = curr->next;
    }
    return curr->data;

}
// Method-2 : Using two pointer
// 1. Move 'first' two pointer ahead
// 2. Move 'second' pointer from head
// 3. When 'first' pointer reach at end then 'second' pointer reach at nth node from end

// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
int NthNodeFromEnd(Node *head, int n){
    Node *slow = head;
    Node *fast = head;
    for(int i=0;i<n;i++){
        if(fast==NULL) return -1;
        fast = fast->next;
    }

    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow->data;
}