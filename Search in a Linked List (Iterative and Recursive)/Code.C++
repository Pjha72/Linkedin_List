#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
// T.C = O(n) S.C = O(1)
// Iterative
int search(Node *head, int x){
    int pos = 1;
    Node *curr = head;
    while(curr!=NULL){
        if(curr->data == x){
            return pos;
        }
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}
// Recursive
// T.C = O(n) S.C = O(n)
int searchRecursive(Node *head, int x){
    if(head==NULL) return -1;
    if(head->data == x){
        return 1;
    }
    else{
        int res = searchRecursive(head->next,x);
        if(res==-1){
            return -1;   
        }
        else return (res+1);
    }
}

// Binary search cannot possible in nlong by using Linkedlist
