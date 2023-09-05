#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
        data = x;
        next = prev = NULL;
    }
};

Node *inertAtBegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    if(head != NULL)
        head->prev = temp;
    return temp;
}

