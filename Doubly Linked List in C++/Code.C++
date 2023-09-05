#include<bits/stdc++.h>
using namespace std;

// doubly linkedlist
struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

int main(){
    Node *head = new Node(10);
    Node *t1 = new Node(20);
    Node *t2 = new Node(30);
    head->next = t1;
    t1->prev = head;
    t1->next = t2;
    t2->prev = t1;
    return 0;
}