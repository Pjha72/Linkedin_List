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

// https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
// T.C = O(N) S.C = O(1)
Node *SortedInsert(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }

    if(x<head->data){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while(curr->next!=NULL && curr->next->data<x){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}