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

// Recursive solution
// T.c = O(n) S.C = O(n)
Node *reverseLLofSizeK(Node *head, int k){
    Node* curr = head;
    Node* prev = NULL;
    Node *next = NULL;
    int cnt = 0;
    while(curr!=NULL && cnt < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(next!=NULL){
        head->next = reverseLLofSizeK(curr, k);
    }
    return prev;  
}

// Iterative solution
    // T.C = O(n) S.C = O(1)
    Node* iterativeRevKSizeOfgrp(Node *head, int k){
        Node *curr = head;
        Node *prevFirst = NULL;
        bool isFirstPass = true;
        
        while(curr!=NULL){
            int cnt = 0;
             Node *first = curr;
                Node *prev = NULL;
                while(curr!=NULL && cnt < k){
               
                Node *next = curr->next;
                curr->next = prev;
                prev= curr;
                curr = next;
                cnt++;
            }

            if(isFirstPass){
                head = prev;
                isFirstPass = false;
            }
            else{
                prevFirst->next = prev;
            }
            prevFirst = first;
        }
        return head;
    }