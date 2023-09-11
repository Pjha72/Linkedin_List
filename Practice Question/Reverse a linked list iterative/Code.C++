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

// Naive Solution : T.C = O(N) S.C = O(N)
Node * reverseLL(Node *head){
    vector<int>arr;
    for(Node *curr = head;
    curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }
    for(Node *curr = head;curr!=NULL;curr = curr->next){
        curr->data = arr.back();
        arr.pop_back();
    }
    return head;
}

// Method-2 : Efficent Solution : T.C = O(N) S.C = O(1)
Node *reverseLL(Node *head){
    if(head == NULL) return NULL;
    if(head->next==NULL) return head;
    Node *curr = head;
    Node *prev =NULL;
    while(curr!=NULL){
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
// T.c = O(N) S.C = O(N)