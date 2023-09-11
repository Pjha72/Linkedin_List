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

// Method-2 : Using Recusrive Approach
// Time Complexity : O(n)
Node *reverseLL(Node *curr, Node *prev){
    // Base case
    if(curr==NULL){
        return prev;
    }

    Node *next = curr->next;
    curr->next = prev;
    return reverseLL(next,curr);

}